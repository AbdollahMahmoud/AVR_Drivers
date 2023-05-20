/*
 * GccApplication7.c
 *
 * Created: 1/24/2023 11:38:32
 * Author : abdal
 */ 
#include "STD_Types.h"
#include "Bit_Math.h"
#include "DIO.h"
#define F_CPU	1000000UL



#include "util/delay.h"

int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		_delay_ms(1500);
		DIO_SetPin(DIO_enuPin18);
		DIO_SetPin(DIO_enuPin23);
		DIO_SetPin(DIO_enuPin27);
		_delay_ms(15000);
		DIO_ClearPin(DIO_enuPin18);
		DIO_ClearPin(DIO_enuPin23);
		DIO_ClearPin(DIO_enuPin27);
		

    }
}

