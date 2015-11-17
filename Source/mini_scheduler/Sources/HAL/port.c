/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: port.c $
 * $Revision: version $
 * $Author: Adan $
 * $Date: 13/11/2015 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    This file will initiate the ports by Output or Input.
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
 * $Log: port.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "HAL\MPC5606B.h"
#include "HAL\port.h"
#include "HAL\stdtypedef.h"

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
Shall initialize the PCRs from the 0 to the 15 on the board.
**/
void GPDO_portA(){
	T_SWORD ch;
	for(ch = 0; ch <= 15; ch++){
		GPDO_init(ch);
	}
}

/** 
Shall initialize the PCRs as Outputs on the board.
**/
void GPDO_init(T_SWORD ch){
	ME.PCTL[ch].R = 0x0000;
	SIU.PCR[ch].R = 0x0201;
	SIU.GPDO[ch].B.PDO = 1;
}


/* Exported functions */
/*============================================================================*/



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
