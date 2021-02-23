/*
 * ADC0_driver.h
 *
 *  Created on: Feb 21, 2021
 *      Author: isae_
 */

#ifndef ADC0_DRIVER_H_
#define ADC0_DRIVER_H_


///////////////////////////////////////////////////////////////////////////////////////////////////
//                                      Includes Section
///////////////////////////////////////////////////////////////////////////////////////////////////
#include "MKL25Z4.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
//                                  Defines & Macros Section
///////////////////////////////////////////////////////////////////////////////////////////////////
#define MODE_10b			(2)
#define Channel_0 			(0)
#define Prescaler_4 		(2)

typedef enum {
	en8bits= 0,
	en10bits,
	en12bits,
	en16bits
}ADC_resolution;

void ADC_Init(ADC_resolution mode);
uint16_t ADC_Polling (uint8_t Channel);


#endif /* ADC0_DRIVER_H_ */
