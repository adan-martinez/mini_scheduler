/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: PIT_DRIVER.c $
 * $Revision: version $
 * $Author: Kevin, Adan $
 * $Date: 13/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    This file shall initiate the PIT drivers for the interruption.
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2015                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*  DATABASE           |        PROJECT     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
/*                     |    Mini Scheduler  |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: PIT_DRIVER.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "HAL\PIT_DRIVER.h"
#include "HAL\stdtypedef.h"
#include "HAL\MPC5606B.h"
#include "HAL\IntcInterrupts.h"


/* Constants and types  */
/*============================================================================*/
T_UBYTE flagISR;


/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/


/* Private functions */
/*============================================================================*/

/** 
Will call the functions that configure the properties of the PIT timer.
**/
void PIT_init(){
	PITconfig();
	PITdebug(1);
	PITchannelinterrupt( 0 , 1);
	PITchanneltimeout( 0, 64000 );
	PITcounterReset(0);
	PITintflagReset(0);
	PITstart(0);
}

/** 
Activate the PIT register.
**/
void PITconfig(void)
{
	PIT.PITMCR.B.MDIS = 0;
}

/** 
Enable or Disable the debug option.
**/
void PITdebug( vuint32_t enable )
{
	PIT.PITMCR.B.FRZ = enable;
}

/** 
Select the channel of the PIT timer and charge the value of the timer.
**/
void PITchanneltimeout( vuint32_t channel , vuint32_t LOAD_VALUE )
{
	PIT.CH[channel].LDVAL.B.TSV = LOAD_VALUE;
}

/** 
Enable or disable the interrupt channel.
**/
void PITchannelinterrupt( vuint32_t channel , vuint32_t enable )
{
	PIT.CH[channel].TCTRL.B.TIE = enable;
}

/** 
Return the state of the flag from the channel you choose.
**/
vuint32_t PITintflagState( vuint32_t channel )
{
	return PIT.CH[channel].TFLG.B.TIF;
}

/** 
Reset the flag from the channel you choose.
**/
void PITintflagReset( vuint32_t channel )
{
	PIT.CH[channel].TFLG.B.TIF = 1;
}

/** 
Start the PIT with channel you choose.
**/
void PITstart( vuint32_t channel )
{
	PIT.CH[channel].TCTRL.B.TEN = 1;
}

/** 
Return the value from the counter from the channel you choose.
**/
vuint32_t PITcountervalue( vuint32_t channel )
{
	return PIT.CH[channel].CVAL.B.TVL;
}

/** 
Restart the counter from the channel you choose. 
**/
void PITcounterReset( vuint32_t channel )
{
	PIT.CH[channel].CVAL.B.TVL = 0;
}

/** 
Initialize the interruptions.
**/
void init_INTC(void){
	INTC_InitINTCInterrupts();
		
	INTC_InstallINTCInterruptHandler(interruption,59,1);
		
	INTC.CPR.R=0;
}

/** 
Define the interruption function.
**/
void interruption (void)
{
	flagISR = 1; 				/*Active the flag.*/
	PITintflagReset(0);			/*Restart the flag count.*/
}


/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */

