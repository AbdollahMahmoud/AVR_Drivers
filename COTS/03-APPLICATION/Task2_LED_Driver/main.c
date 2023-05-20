/*
 * GccApplication8.c
 *
 * Created: 1/24/2023 12:13:51
 * Author : abdal
 */ 

#include "STD_Types.h"
#include "Bit_Math.h"
#include "LED.h"
#include <util/delay.h>
#define F_CPU	1000000UL



int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		LED_On(LED_enuPinC2);
		_delay_ms(20000);
		LED_Off(LED_enuPinC2);
		LED_On(LED_enuPinC7);
		_delay_ms(20000);
		LED_Off(LED_enuPinC7);
		LED_On(LED_enuPinD3);
		_delay_ms(20000);
		LED_Off(LED_enuPinD3);
		LED_On(LED_enuPinC7);
		_delay_ms(20000);
		LED_Off(LED_enuPinC7);
		
    }
}

