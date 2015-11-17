/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: LED.c $
 * $Revision: version $
 * $Author: Adan $
 * $Date: 13/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    This file will initiate the LEDs from the boolero.
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
 * $Log: LED.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "HAL\MPC5606B.h"
#include "HAL\LED.h"
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
Shall initialize the register to the LED on the board.
**/
void led_init_mode(void)
{
		char count;
		
		init_mode();

		for(count = 68; count <= 71; count++)	/*Going from PCR 68 until PCR 71*/
		{	
			ME.PCTL[count].R = 0x0000;
			SIU.PCR[count].R = 0x0201;
			SIU.GPDO[count].B.PDO = 1;
		}
			
}

/** 
Shall toggle the status from the port you send.
**/
void toggle_pin( vuint8_t PCR_ch )
{
	SIU.GPDO[PCR_ch].B.PDO ^= 1;
}
/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */



