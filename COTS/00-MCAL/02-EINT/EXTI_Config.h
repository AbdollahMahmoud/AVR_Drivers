/*************************************************************
 * 
 * Filename: EXTI_Config.h
 * Description: Configuration header file of the EXTI driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/

#ifndef __EXTI_CONFIG_H__
#define __EXTI_CONFIG_H__


#define	ISC2_BIT	6

typedef enum{
	LowLevel=0,
	LogicalChange,
	Falling,
	Rising
	
}EXTI_tenuMode;



typedef enum{
	EXTI_enuINT0,
	EXTI_enuINT1,
	EXTI_enuINT2
	
}EXTI_tenuINT;



typedef enum{
	EXTI_enuInt0GICR = 6,
	EXTI_enuInt1GICR = 7,
	EXTI_enuInt2GICR = 5
	
}EXTI_tenuIntGICR; //which bits in the Reg



#endif /* __EXTI_CONFIG_H__ */