/*******************************************/
/*SSEGMENT Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-27 */ 
/*******************************************/

#include "STD_TYPES.h"
#include "DIO.h"
#include "SSEGMENT.h"
#include "SSEGMENT_Cfg.h"
#include "SSEGMENT_Prv.h"

SSEG_tenuErrorStatus SSEG_enuSetDigit(SSEG_tenuPorts Cpy_enuPort, u8 Cpy_u8Number){
	SSEG_tenuErrorStatus ErrorReturn = SSEG_enuNotOk;
    if(Cpy_u8Number >= 0 && Cpy_u8Number <= 9)
    {
        DIO_SetPort(Cpy_enuPort, Digits[Cpy_u8Number]); 
		ErrorReturn = SSEG_enuOk;
    }
	return ErrorReturn;
}

