/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: PIT_DRIVER.h $
 * $Revision: version $
 * $Author: Kevin $
 * $Date: date $
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
 * $Log: PIT_DRIVER.h  $
  ============================================================================*/
#ifndef PIT_DRIVER_H_
#define PIT_DRIVER_H_

/* Includes */
/*============================================================================*/
#include "HAL\typedefs.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

void PIT_init();

void PITconfig(void);

void PITdebug( vuint32_t enable );

void PITchanneltimeout( vuint32_t channel , vuint32_t LOAD_VALUE );

void PITchannelinterrupt( vuint32_t channel , vuint32_t enable );

vuint32_t PITintflagState( vuint32_t channel );

void PITintflagReset( vuint32_t channel );

void PITstart( vuint32_t channel );

vuint32_t PITcountervalue( vuint32_t channel );

void PITcounterReset( vuint32_t channel );

void init_INTC(void);

void interruption (void);



#endif  
/* Notice: the file ends with a blank new line to avoid compiler warnings */

