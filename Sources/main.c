/*
 * main implementation: use this 'C' sample to create your own application
 *
 */





#include "derivative.h" /* include peripheral declarations */
#include "UART.h"
#include "ADC0_driver.h"
#include "conversion_ADC.h"
#include "leds.h"
#include "MKL25Z4.h"

#define Baud_rate (uint32_t)(21013)
#define dato1_Tx_Size		(uint16_t)(sizeof(dato1_Tx)/sizeof(dato1_Tx[0]))
#define  on_rojo       GPIOB_PDOR |= ~(1<<18);
#define  on_verde      GPIOB_PDOR |= ~(1<<19);
#define  off           GPIOD_PDOR |= (1<<18)+(1<<19);

void final_recieve (uint8_t data);

void delay (void)
{
	uint32_t tiempo=0;
	for (tiempo=0;tiempo>2000000;tiempo++);
}

uint8_t Buffer_Rx[10];
uint8_t index_Rx=0;
uint8_t dato1_Tx[]={"Error\n"};
uint8_t Alarma=0;


int main(void)
{
	Init_ADC();
//	UART_init((void *)UART0_BASE_PTR, Baud_rate ,&final_recieve);
	init_led ();
	
	Alarma = conversion();
	
	if (Alarma==2)
	{
		on_rojo;
		//uart_write(&dato1_Tx[0],dato1_Tx_Size);
	}
	else
	{
		on_verde;
	}
	//delay ();
	//off;
	
	
	while (1);
}
/**
void final_recieve (uint8_t data)
{
	uint8_t *pBffer = Buffer_Rx;
	
		if (index_Rx>=3)
		{
			index_Rx = 0;
		}
		*pBffer=data;
		index_Rx++;
		
}
**/
