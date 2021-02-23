/*
 * leds.c
 *
 *  Created on: Feb 21, 2021
 *      Author: isae_
 */

#include "MKL25Z4.h"
#include "leds.h"


void init_led (void) {

//INICIALIZAMOS
SIM_SCGC5 = (1<<10);
PORTB_PCR18 = (1<<8);    //Rojo
PORTB_PCR19 = (1<<8);   //Verde
GPIOB_PDDR = (1<<1);

}
