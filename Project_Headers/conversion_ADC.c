/*
 * conversion_ADC.c
 *
 *  Created on: Feb 21, 2021
 *      Author: isae_
 */


///////////////////////////////////////////////////////////////////////////////////////////////////
//                                      Includes Section
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "MKL25Z4.h"
#include "conversion_ADC.h"
#include "leds.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
//                                      Function Section
///////////////////////////////////////////////////////////////////////////////////////////////////

void medidor_init (void)
{
	Init_ADC();
}

uint8_t conversion (void)
{
	uint16_t resultado_muestra=0;
	uint32_t suma_resultado=0;
	uint8_t conteo_muestra=0;
	uint8_t Minimo=3;
	uint8_t Maximo=50;
	uint8_t Color=0;

	
	for (conteo_muestra=0;conteo_muestra<5;conteo_muestra++)
	{
		resultado_muestra=Medidor_input();
		suma_resultado+=resultado_muestra;
	}
	
	suma_resultado=suma_resultado/5;//promedio, 
	
	
		if((suma_resultado>=Minimo) && (suma_resultado<=Maximo))
		{
	
			Color=1;
		}

		else//Error 
		{
			Color=2;
		}


	
return Color;	
	
	
	
}
