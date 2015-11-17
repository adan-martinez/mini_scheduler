/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: scheduler.c $
 * $Revision: version $
 * $Author: Kevin, Adan $
 * $Date: 17/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    This file will define the scheduler functions.
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
 * $Log: scheduler.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "App\scheduler.h"
#include "MAL\TaskHandler.h"
#include "HAL\PIT_DRIVER.h"

/* Constants and types  */
/*============================================================================*/


/* Variables */
/*============================================================================*/
extern T_tsk ar_tsk[E_TotalTsk];
extern T_ULONG ar_dynamic[E_TotalTsk];
extern T_UBYTE flagISR;


/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/



/* Private functions */
/*============================================================================*/

/** 
Shall define the functionality of your task 0.
**/
void scheduler(void){
	T_UBYTE i;
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
/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */

