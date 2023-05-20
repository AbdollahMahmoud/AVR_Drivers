/*************************************************************
 * 
 * Filename: KEYPAD_Config.h
 * Description: Configuration header file of the KEYPAD driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/

#ifndef __KEYPAD_CONFIG_H__
#define __KEYPAD_CONFIG_H__

#include "DIO.h"						//8alat , bs ma 3lena 5odo 3la 2d 32lo


/*The size of the used Keypad can either be 4*3 or 4*4*/
#define	KEYPAD_4X3		0
#define	KEYPAD_4X4		1
#define	KEYPAD_SIZE		KEYPAD_4X3	



/*Input pins' state*/  		

#define	KEYPAD_INPUT_PULL_UP	0
#define	KEYPAD_INPUT_PULL_DOWN	1
#define 	KEYPAD_STATE 		KEYPAD_INPUT_PULL_UP


//4/3 colmns and 4 inputs (rows)

//remember to configure rows as outputs in the dio

#define	KEYPAD_ROW1		DIO_enuPin0		//could also be done through ports and pins as usually
#define	KEYPAD_ROW2		DIO_enuPin1
#define	KEYPAD_ROW3		DIO_enuPin2
#define	KEYPAD_ROW4		DIO_enuPin3


//cols are i/ps

#define	KEYPAD_COL1		DIO_enuPin4
#define	KEYPAD_COL2		DIO_enuPin5
#define	KEYPAD_COL3		DIO_enuPin6

#if (KEYPAD_SIZE == KEYPAD_4X4)
	#define	KEYPAD_COL4		DIO_enuPin7
#endif


#endif /* __KEYPAD_CONFIG_H__ */