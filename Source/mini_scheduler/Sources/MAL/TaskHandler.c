/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: TaskHandler.c $
 * $Revision: version $
 * $Author: Kevin, Adan $
 * $Date: 17/11/2015 $
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
 * $Log: TaskHandler.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/

#include "MAL\TaskHandler.h"
#include "HAL\LED.h"

/* Constants and types  */
/*============================================================================*/
T_tsk ar_tsk[E_TotalTsk] = {
	{ Task_0 , 100 , 5 },
	{ Task_1 , 200 , 10 },
	{ Task_2 , 500 , 15 },
	{ Task_3 , 1000 , 20 }
};


/* Variables */
/*============================================================================*/
T_ULONG ar_dynamic[E_TotalTsk];


/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/



/* Private functions */
/*============================================================================*/

/** 
Shall define the functionality of your task 0.
**/
void Task_0 (void)
{
	/*You have to define your functionality of your task in here.*/
	/*---------------------------------------------------------*/
	
	toggle_pin(68);			/*Shall toggle the output of the first LED on the board.*/
	
	/*---------------------------------------------------------*/
}

/** 
Shall define the functionality of your task 1.
**/
void Task_1 (void)
{
	/*You have to define your functionality of your task in here.*/
	/*---------------------------------------------------------*/
	
	toggle_pin(69);			/*Shall toggle the output of the second LED on the board.*/
	
	/*---------------------------------------------------------*/

}

/** 
Shall define the functionality of your task 2.
**/
void Task_2 (void)
{
	/*You have to define your functionality of your task in here.*/
	/*---------------------------------------------------------*/
	
	toggle_pin(70);			/*Shall toggle the output of the third LED on the board.*/
	
	/*---------------------------------------------------------*/

}

/** 
Shall define the functionality of your task 3.
**/
void Task_3 (void)
{
	/*You have to define your functionality of your task in here.*/
	/*---------------------------------------------------------*/
	
	toggle_pin(71);			/*Shall toggle the output of the fourth LED on the board.*/
	
	/*---------------------------------------------------------*/

}

/** 
Shall initialize the task offsets values in the struct.
**/
void init_tasks_offset(void){
	T_UBYTE i; 
	for( i = 0 ; i < E_TotalTsk ; i++ )
		{
			ar_dynamic[i] = ar_tsk[i].offset;
		}
}

/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */

