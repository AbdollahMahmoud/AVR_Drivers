/*******************************************/
/*SSEGMENT Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-27*/
/*******************************************/
#ifndef _SSEGMENT_CFG_H
#define _SSEGMENT_CFG_H


typedef enum{
	ZERO = 0,
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE
}SSEG_tenuDigits;



const u8 Digits [10];



#endif /*SSEGMENT_CFG_H*/
