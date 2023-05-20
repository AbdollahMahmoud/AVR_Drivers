/*******************************************/
/*LED Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-24*/
/*******************************************/


#include "..\..\01-HAL\01-LED\LED.h"
#include "..\..\04-LIBRARY\STD_Types.h"
#include "..\..\01-HAL\01-LED\LED_Config.h"
#include "..\..\01-HAL\01-LED\LED_Prv.h"
#include "..\..\04-LIBRARY\Bit_Math.h"


const LED_tstrLEDConfig LED_strLEDconfig [TotalLeds] = 
{
	[LedOne] = {LED_enuPinC2, LED_enuHigh},
	[LedTwo] = {LED_enuPinC7, LED_enuHigh},
	[LedThree] = {LED_enuPinD3, LED_enuHigh}
};