#include "MPC5606B.h"
#include "TaskHandler.h"
#include "InitModesClocks.h"
#include "IntcInterrupts.h"

extern T_tsk ar_tsk[E_TotalTsk];

extern vuint32_t ar_dynamic[E_TotalTsk];

vuint8_t flagISR;

void interrutsion (void);

int main(void) {
	int i;
	
	InitModesClocks();
	
	INTC_InitINTCInterrupts();
	
	INTC_InstallINTCInterruptHandler(interrutsion,59,1);
	
	INTC.CPR.R=0;
	
	GPIOport(68);
	GPIOport(69);
	GPIOport(70);
	GPIOport(71);
	
	GPIO_out(68);
	GPIO_out(69);
	GPIO_out(70);
	GPIO_out(71);
	
	
	for( i = 0 ; i < E_TotalTsk ; i++ )
	{
		ar_dynamic[i] = ar_tsk[i].offset;
	}
	
	PITconfig();
	PITchannelinterrupt(0,1);
	PITchanneltimeout(0,64000);
	PITcounterReset(0);
	PITintflagReset(0);
	PITstart(0);
	
	
	
	while(1)
	{
		if(flagISR)
		{
			flagISR = 0;
			
			for( i = 0 ; i < E_TotalTsk ; i++ )
			{
				if( ar_dynamic[i] > 0 )
				{
					ar_dynamic[i]--;
				}
				else 
				{
					ar_dynamic[i] = ar_tsk[i].period;
					ar_tsk[i].tskPtr();
				}
			}
		}
	}
}

void interrutsion (void)
{
	flagISR = 1;
	PITintflagReset(0);
}


