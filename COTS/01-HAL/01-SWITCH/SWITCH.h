/*******************************************/
/*SWITCH Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-22*/
/*******************************************/

#include "SWITCH_Cfg.h"

#ifndef _SWITCH_H
#define _SWITCH_H

typedef enum{
	SWITCH_enuPinA0,
	SWITCH_enuPinA1,
	SWITCH_enuPinA2,
	SWITCH_enuPinA3,
	SWITCH_enuPinA4,
	SWITCH_enuPinA5,
	SWITCH_enuPinA6,
	SWITCH_enuPinA7,
	
	SWITCH_enuPinB0,
	SWITCH_enuPinB1,
	SWITCH_enuPinB2,
	SWITCH_enuPinB3,
	SWITCH_enuPinB4,
	SWITCH_enuPinB5,
	SWITCH_enuPinB6,
	SWITCH_enuPinB7,
	
	SWITCH_enuPinC0,
	SWITCH_enuPinC1,
	SWITCH_enuPinC2,
	SWITCH_enuPinC3,
	SWITCH_enuPinC4,
	SWITCH_enuPinC5,
	SWITCH_enuPinC6,
	SWITCH_enuPinC7,
	
	SWITCH_enuPinD0,
	SWITCH_enuPinD1,
	SWITCH_enuPinD2,
	SWITCH_enuPinD3,
	SWITCH_enuPinD4,
	SWITCH_enuPinD5,
	SWITCH_enuPinD6,
	SWITCH_enuPinD7,
	
	SWITCH_enuTotalPins
	
}SWITCH_tenuPins;



typedef enum{
	SWITCH_enuReleased,
	SWITCH_enuPressed
	}SWITCH_tenuStatus;



typedef enum 
{
	SWITCH_enuOk,
	SWITCH_enuNotOk,
	SWITCH_enuNullPtr
}SWITCH_tenuErrorStatus;


/***************************************************/

/*	Switch FUNCTION
	INPUT: Pin Number
	OUTPUT: SWITCH_tenuErrorStatus TO REPORT STATUS	*/
	
/**************************************************/

SWITCH_tenuErrorStatus Switch(DIO_tenuPins Cpy_enuPin, u8* Loc_u8SwitchState);

/******************************************************/




#endif /*SWITCH_H*/
