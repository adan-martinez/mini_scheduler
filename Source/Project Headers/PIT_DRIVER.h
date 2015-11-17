/*
 * PIT_DRIVER.h
 *
 *  Created on: Nov 11, 2015
 *      Author: Kevin
 */

#ifndef PIT_DRIVER_H_
#define PIT_DRIVER_H_

#include <MPC5606B.h>


void PITconfig(void);

void PITdebug( vuint32_t enable );

void PITchanneltimeout( vuint32_t channel , vuint32_t LOAD_VALUE );

void PITchannelinterrupt( vuint32_t channel , vuint32_t enable );

vuint32_t PITintflagState( vuint32_t channel );

void PITintflagReset( vuint32_t channel );

void PITstart( vuint32_t channel );

vuint32_t PITcountervalue( vuint32_t channel );

void PITcounterReset( vuint32_t channel );

#endif /* PIT_DRIVER_H_ */
