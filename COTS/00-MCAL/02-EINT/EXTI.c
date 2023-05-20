/*************************************************************
 * 
 * Filename: EXTI.c
 * Description: Source file of the EXTI driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/

#include "EXTI_Config.h"
#include "EXTI_Priv.h"
#include "EXTI.h"


EXTI_tenuErrorStatus EXTI_EnableINT(EXTI_tenuINT Cpy_enuIntNumber)
{
	EXTI_tenuErrorStatus EXTI_enuErrorReturn = EXTI_enuNotOk;
	
	if(Cpy_enuIntNumber < EXTI_enuINT0 || Cpy_enuIntNumber > EXTI_enuINT2)
	{
		EXTI_enuErrorReturn = EXTI_enuNotOk;
	}
	else
	{
		switch(Cpy_enuIntNumber)
		{
			case EXTI_enuINT0:
				SET_BIT(GICR, EXTI_enuInt0GICR);
				EXTI_enuErrorReturn = EXTI_enuOk;
				break;
				
			case EXTI_enuINT1:
				SET_BIT(GICR, EXTI_enuInt1GICR);
				EXTI_enuErrorReturn = EXTI_enuOk;
				break;
				
			case EXTI_enuINT2:
				SET_BIT(GICR, EXTI_enuInt2GICR);
				EXTI_enuErrorReturn = EXTI_enuOk;
				break;
		}
	}
	return EXTI_enuErrorReturn;
}




EXTI_tenuErrorStatus EXTI_IntMode(EXTI_tenuINT Cpy_enuIntNumber, EXTI_tenuMode Cpy_enuMode)
{
	EXTI_tenuErrorStatus EXTI_enuErrorReturn = EXTI_enuNotOk;
	if(Cpy_enuIntNumber < EXTI_enuINT0 || Cpy_enuIntNumber > EXTI_enuINT2 || Cpy_enuMode < LowLevel || Cpy_enuMode > Rising)
	{
		EXTI_enuErrorReturn = EXTI_enuNotOk;
	}
	else
	{
		switch(Cpy_enuIntNumber)
		{
			case EXTI_enuINT0:
				MCUCR &= 0xFC;	
				MCUCR |= Cpy_enuMode;
				EXTI_enuErrorReturn = EXTI_enuOk;
				break;				
				
			case EXTI_enuINT1:
				MCUCR &= 0xF3;
				MCUCR |= (Cpy_enuMode<<2);
				EXTI_enuErrorReturn = EXTI_enuOk;
				break;
				
			case EXTI_enuINT2:
				if(Cpy_enuMode == Rising)
				{
					SET_BIT(MCUCSR, ISC2_BIT);
				}
				else if(Cpy_enuMode == Falling)
				{
					CLR_BIT(MCUCSR, ISC2_BIT);
				}	
				EXTI_enuErrorReturn = EXTI_enuOk;
				break;
		}
	}
	return EXTI_enuErrorReturn;
}
