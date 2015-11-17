/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: TaskHandler.h $
 * $Revision: version $
 * $Author: Kevin, Adan $
 * $Date: 17/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    short description in one sentence end with dot.
    detailed
    multiline
    description of the file
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
 * $Log: TaskHandler.h  $
  ============================================================================*/
#ifndef TASKHANDLER_H_
#define TASKHANDLER_H_

/* Includes */
/*============================================================================*/

#include "HAL\stdtypedef.h"

/* Constants and types */
/*============================================================================*/

typedef struct{
	Fptr tskPtr;
	T_UWORD period;
	T_UWORD offset;
} T_tsk;


typedef enum{
	E_tsk_T0,					/* Task 0 toggles a LED every 10 ms and has an offset of 5 ms*/
	E_tsk_T1,					/* Task 1 toggles a LED every 100 ms and has an offset of 10 ms*/
	E_tsk_T2,					/* Task 2 toggles a LED every 500 ms and has an offset of 15 ms*/
	E_tsk_T3,					/* Task 3 toggles a LED every second and has an offset of 20 ms*/
	
	E_TotalTsk					/* Top number of tasks inner system */
} E_tsk;


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

/*-----------------------------------------------*/
/*Define all the task you shall need.*/
void Task_0 (void);		
void Task_1 (void);
void Task_2 (void);
void Task_3 (void);
/*-----------------------------------------------*/

void init_tasks_offset(void);

#endif  
/* Notice: the file ends with a blank new line to avoid compiler warnings */

