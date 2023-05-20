/*******************************************/
/*LED Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-24 */ 
/*******************************************/

#include "..\..\01-HAL\01-LED\LED.h"
#include "..\..\04-LIBRARY\STD_Types.h"
#include "..\..\01-HAL\01-LED\LED_Config.h"
#include "..\..\01-HAL\01-LED\LED_Prv.h"
#include "..\..\04-LIBRARY\Bit_Math.h"


LED_tenuErrorStatus  LED_On(LED_tenuPins LED_enuPin)
{
	LED_tenuErrorStatus LED_ErrorReturn = LED_enuNotOk;
	if(LED_enuPin < LED_enuPinA0 || LED_enuPin >= LED_enuTotalPins)
	{
		LED_ErrorReturn = LED_enuNotOk;
	}
	else
	{
		DIO_SetPin(LED_strLEDconfig[LED_enuPin].LED_PinNumber);
		LED_ErrorReturn = LED_enuNotOk;
	}
	return LED_ErrorReturn;
}


LED_tenuErrorStatus  LED_Off(LED_tenuPin LED_enuPin)
{
	LED_tenuErrorStatus LED_ErrorReturn = LED_enuNotOk;
	if(LED_enuPin < LED_enuPinA0 || LED_enuPin >= LED_enuTotalPins)
	{
		LED_ErrorReturn = LED_enuNotOk;
	}
	else
	{
		DIO_ClearPin(LED_strLEDconfig[LED_enuPin].LED_PinNumber);
		LED_ErrorReturn = LED_enuNotOk;
	}
	return LED_ErrorReturn;
}


LED_tenuErrorStatus  LED_Toggle(LED_tenuPin LED_enuPin)
{
	return LED_ErrorReturn;
}
