/*
 * PortInit.c
 *
 *  Created on: Nov 3, 2015
 *      Author: Kevin
 */
#include "MPC5606B.h"
#include "PortInit.h"

void GPIOport( vuint8_t PCR_ch )
{
	SIU.PCR[PCR_ch].B.PA = 0;
}


void GPIO_out( vuint8_t PCR_ch )
{
	SIU.PCR[PCR_ch].B.OBE = 1;
}



void GPIO_in( vuint8_t PCR_ch )
{
	SIU.PCR[PCR_ch].B.IBE = 1;
}



void set_pin( vuint8_t PCR_ch , vuint8_t value )
{
	SIU.GPDO[PCR_ch].B.PDO = value;
}



vuint8_t read_pin( vuint8_t PCR_ch )
{
	return SIU.GPDI[PCR_ch].B.PDI;
}

void toggle_pin( vuint8_t PCR_ch )
{
	SIU.GPDO[PCR_ch].B.PDO ^= 1;
}
