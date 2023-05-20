/*************************************************************
 * 
 * Filename: EXTI_Priv.h
 * Description: Private header file of the EXTI driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/
#include "STD_TYPES.h"
#ifndef __EXTI_PRIV_H__
#define __EXTI_PRIV_H__


#define	SREG		(*(volatile u8*) 0x5F)

#define	GICR		(*(volatile u8*) 0x5B)

#define	GIFR		(*(volatile u8*) 0x5A)

#define	MCUCR		(*(volatile u8*) 0x55)

#define	MCUCSR	(*(volatile u8*) 0x54)





#endif /* __EXTI_PRIV_H__ */