/*
 * PIT_DRIVER.c
 *
 *  Created on: Nov 10, 2015
 *      Author: Kevin
 */

#include <PIT_DRIVER.h>


void PITconfig(void)
{
	PIT.PITMCR.B.MDIS = 0;
}

void PITdebug( vuint32_t enable )
{
	PIT.PITMCR.B.FRZ = enable;
}

void PITchanneltimeout( vuint32_t channel , vuint32_t LOAD_VALUE )
{
	PIT.CH[channel].LDVAL.B.TSV = LOAD_VALUE;
}

void PITchannelinterrupt( vuint32_t channel , vuint32_t enable )
{
	PIT.CH[channel].TCTRL.B.TIE = enable;
}

vuint32_t PITintflagState( vuint32_t channel )
{
	return PIT.CH[channel].TFLG.B.TIF;
}

void PITintflagReset( vuint32_t channel )
{
	PIT.CH[channel].TFLG.B.TIF = 1;
}

void PITstart( vuint32_t channel )
{
	PIT.CH[channel].TCTRL.B.TEN = 1;
}

vuint32_t PITcountervalue( vuint32_t channel )
{
	return PIT.CH[channel].CVAL.B.TVL;
}

void PITcounterReset( vuint32_t channel )
{
	PIT.CH[channel].CVAL.B.TVL = 0;
}
