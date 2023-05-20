/*************************************************************
 * 
 * Filename: EXTI.h
 * Description: Header (interface) file of the EXTI driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/
#include "EXTI_Config.h"
#ifndef __EXTI_H__
#define __EXTI_H__


typedef enum{
	EXTI_enuOk,
	EXTI_enuNotOk
	
}EXTI_tenuErrorStatus;


EXTI_tenuErrorStatus EXTI_EnableINT(EXTI_tenuINT Cpy_enuIntNumber);

EXTI_tenuErrorStatus EXTI_IntMode(EXTI_tenuINT Cpy_enuIntNumber, EXTI_tenuMode Cpy_enuMode);


#endif /* __EXTI_H__ */