/*******************************************/
/*LED Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-24*/
/*******************************************/
#ifndef _LED_CFG_H
#define _LED_CFG_H

#define PinsPerPort 8


typedef enum{
	Led_PortA = 0,
	Led_PortB,
	Led_PortC,
	Led_PortD
}LED_tenuPorts;

typedef enum{
	LedOne =0,
	LedTwo,
	LedThree,
	
	TotalLeds
}LED_tenuLeds;
	
typedef enum{
	LED_enuLow,
	LED_enuHigh
	}LED_tenuState;


typedef struct{
	LED_tenuPins LED_PinNumber;
	LED_tenuState LED_enuState;
	}LED_tstrLedConfig;
	
	
const LED_tstrLedConfig LED_strLedConfig [3];



#endif /*LED_CFG_H*/
