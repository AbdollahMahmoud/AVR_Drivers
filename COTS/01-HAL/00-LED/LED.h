/*******************************************/
/*LED Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-24*/
/*******************************************/
#ifndef _LED_H
#define _LED_H

typedef enum{
	LED_enuOk,
	LED_enuNotOk,
	LED_enuNullPointer
}LED_tenuErrorStatus;

typedef	enum{
	LED_enuPinA0,
	LED_enuPinA1,
	LED_enuPinA2,
	LED_enuPinA3,
	LED_enuPinA4,
	LED_enuPinA5,
	LED_enuPinA6,
	LED_enuPinA7,
	
	LED_enuPinB0,
	LED_enuPinB1,
	LED_enuPinB2,
	LED_enuPinB3,
	LED_enuPinB4,
	LED_enuPinB5,
	LED_enuPinB6,
	LED_enuPinB7,
	
	LED_enuPinC0,
	LED_enuPinC1,
	LED_enuPinC2,
	LED_enuPinC3,
	LED_enuPinC4,
	LED_enuPinC5,
	LED_enuPinC6,
	LED_enuPinC7,
	
	LED_enuPinD0,
	LED_enuPinD1,
	LED_enuPinD2,
	LED_enuPinD3,
	LED_enuPinD4,
	LED_enuPinD5,
	LED_enuPinD6,
	LED_enuPinD7,
	
	LED_enuTotalPins
	
	}LED_tenuPins;



LED_tenuErrorStatus  LED_On(LED_tenuPins Cpy_u8Pin);


LED_tenuErrorStatus  LED_Off(LED_tenuPins Cpy_u8Pin);


LED_tenuErrorStatus  LED_Toggle(LED_tenuPins Cpy_u8Pin);





#endif /*LED_H*/
