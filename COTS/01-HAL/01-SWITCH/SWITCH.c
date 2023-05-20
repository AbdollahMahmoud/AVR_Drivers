/*******************************************/
/*SWITCH Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-22 */ 
/*******************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "SWITCH.h"
#include "SWITCH_Cfg.h"




SWITCH_tenuErrorStatus Switch(SWITCH_tenuPins Cpy_enuPin, u8* Loc_u8SwitchState)
{
	SWITCH_tenuErrorStatus SWITCH_ErrorReturn = SWITCH_enuNotOk;
	if (Cpy_enuPin < SWITCH_enuPinA0 || Cpy_enuPin > SWITCH_enuPinD7)
	{
		SWITCH_ErrorReturn = SWITCH_enuNotOk;
	}
	else
	{
		SWITCH_GetPin(Cpy_enuPin, Loc_u8SwitchState);
				if (Loc_u8SwitchState == SWITCH_enuReleased)
				{
					_delay_ms(25);
					SWITCH_GetPin(Cpy_enuPin, Loc_u8SwitchState);
					if (*Loc_u8SwitchState == SWITCH_enuReleased)
					{
						*Loc_u8SwitchState = SWITCH_enuReleased;
						SWITCH_ErrorReturn = SWITCH_enuOk;
					}
					else
					{
						SWITCH_ErrorReturn = SWITCH_enuNotOk;
					}
					
				}
				else
				{
					_delay_ms(25);
					SWITCH_GetPin(Cpy_enuPin, Loc_u8SwitchState);
					if (*Loc_u8SwitchState == SWITCH_enuPressed)
					{
						*Loc_u8SwitchState = SWITCH_enuPressed;
						SWITCH_ErrorReturn = SWITCH_enuOk;
					}
					else
					{
						SWITCH_ErrorReturn = SWITCH_enuNotOk;
					}
					
				}
		
	}
	
	return SWITCH_ErrorReturn;
}


