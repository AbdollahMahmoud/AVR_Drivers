/*************************************************************
 * 
 * Filename: KEYPAD.h
 * Description: Header (interface) file of the KEYPAD driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/

#ifndef __KEYPAD_H__
#define __KEYPAD_H__



typedef enum{
	KeyPad_enu1,
	KeyPad_enu2,
	KeyPad_enu3,
	KeyPad_enu4,
	KeyPad_enu5,
	KeyPad_enu6,
	KeyPad_enu7,
	KeyPad_enu8,
	KeyPad_enu9,
	KeyPad_enu0,
	KeyPad_enuStar,
	KeyPad_enuHash,
	
#if (KEYPAD_SIZE == KEYPAD_4X4)
	KeyPad_enuA,
	KeyPad_enuB,
	KeyPad_enuC,
	KeyPad_enuD,			//check the syntax, should the column "," be here?
#endif
	
	KeyPad_enuKeyNumber,		//Increases in case of 4*4
	KeyPad_enuNotPressed = 255 	//make it as far away as u can
	
}KeyPad_tenuPressedKey;

typedef enum{
	KeyPad_enuNotOk,
	KeyPad_enuOk
	
}KeyPad_tenuErrorStatus;

KeyPad_tenuErrorStatus KeyPad_GetPressedKey(KeyPad_tenuPressedKey* KeyReturnAddress);



#endif /* __KEYPAD_H__ */