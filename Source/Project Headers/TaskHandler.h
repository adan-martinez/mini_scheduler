/*
 * TaskHandler.h
 *
 *  Created on: Nov 13, 2015
 *      Author: Kevin
 */

#ifndef TASKHANDLER_H_
#define TASKHANDLER_H_

#include <MPC5606B.h>
#include <stdtypedef.h>
#include <PortInit.h>
#include <PIT_DRIVER.h>
#include <typedefs.h>

void Task_0 (void);
void Task_1 (void);
void Task_2 (void);
void Task_3 (void);


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


#endif /* TASKHANDLER_H_ */
