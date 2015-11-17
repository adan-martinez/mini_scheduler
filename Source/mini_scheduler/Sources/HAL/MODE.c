/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: MODE.c $
 * $Revision: version $
 * $Author: Adan $
 * $Date: 13/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    This file will initiate the MODE RUN0 from the boolero.
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
 * $Log: MODE.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "HAL\MPC5606B.h"
#include "HAL\MODE.h"

/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/

/** 
Shall initialize the mode on the board.
**/
void init_mode(){
			ME.MER.R = 0x0000001D;  			//Activa modo DRUN y RUN0
			CGM.FMPLL_CR.R = 0x02400100;
			ME.RUN[0].R = 0x001F0074;       	/* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL */ //Inicializa el sysclk en freq. mod. PLL							
			ME.RUNPC[1].R = 0x00000010; 	  	/* Peri. Cfg. 1 settings: only run in RUN0 mode */
			ME.PCTL[68].R = 0x01; 	    /*MPC56xxB/S SIU: select ME.RUNPC[1] */
			ME.PCTL[92].R = 1;			/* PIT select ME.RUNPC[1]*/

			/* Mode Transition to enter RUN0 mode: */

			ME.MCTL.R = 0x40005AF0;         /* Enter RUN0 Mode & Key */
			ME.MCTL.R = 0x4000A50F;         /* Enter RUN0 Mode & Inverted Key */  

			while (ME.GS.B.S_MTRANS) {}     /* Wait for mode transition to complete */    

			/* Note: could wait here using timer and/or I_TC IRQ */

			while(ME.GS.B.S_CURRENTMODE != 4) {} /* Verify RUN0 is the current mode */
			
}

/* Exported functions */
/*============================================================================*/


/* Notice: the file ends with a blank new line to avoid compiler warnings */
