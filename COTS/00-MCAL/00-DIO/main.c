#include <stdio.h>
#include "STD_TYPES.h"
#include "DIO_interface.h"



int main(void)
{
    u8 Local_u8InputValue = 1;

    DIO_u8SetPinDirection(DIO_u8PORTA, DIO_u8PIN1, DIO_u8PIN_INPUT);
    //activate pull-up => zero if switch is pressed
    DIO_u8SetPinValue(DIO_u8PORTA, DIO_u8PIN1, DIO_u8PIN_HIGH);

    DIO_u8SetPinDirection(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_OUTPUT);


    while(1)
    {
        DIO_u8GetPinValue(DIO_u8PORTA, DIO_u8PIN1, &Local_u8InputValue);
        if(Local_u8InputValue == 0) //switch pressed
        {
            DIO_u8SetPinValue(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_HIGH);
        }
    }
    return 0;
}