/*
 * PortInit.h
 *
 *  Created on: Nov 3, 2015
 *      Author: Kevin
 */

#ifndef PORTINIT_H_
#define PORTINIT_H_

void GPIOport( vuint8_t PCR_ch );
void GPIO_out( vuint8_t PCR_ch );
void GPIO_in( vuint8_t PCR_ch );
void set_pin( vuint8_t PCR_ch , vuint8_t value );
vuint8_t read_pin( vuint8_t PCR_ch );
void toggle_pin( vuint8_t PCR_ch );

#endif /* PORTINIT_H_ */
