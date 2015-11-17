/*
 * TaskHandler.c
 *
 *  Created on: Nov 12, 2015
 *      Author: Kevin
 */

#include "TaskHandler.h"

T_tsk ar_tsk[E_TotalTsk] = {
	{ Task_0 , 100 , 5 },
	{ Task_1 , 200 , 10 },
	{ Task_2 , 500 , 15 },
	{ Task_3 , 1000 , 20 }
};

vuint32_t ar_dynamic[E_TotalTsk];

void Task_0 (void)
{
	toggle_pin(68);
}

void Task_1 (void)
{
	toggle_pin(69);
}

void Task_2 (void)
{
	toggle_pin(70);
}

void Task_3 (void)
{
	toggle_pin(71);
}
