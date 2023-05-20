/*************************************************************
 * 
 * Filename: KEYPAD.c
 * Description: Source file of the KEYPAD driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO.h"
#include "KEYPAD.h"
#include "KEYPAD_Config.h"
#include "KEYPAD_Priv.h"



#define ROWS	4

#if (KEYPAD_SIZE == KEYPAD_4X4)
	#define COLS	4
#else 
	#define COLS	3
#endif




#if (KEYPAD_STATE == KEYPAD_INPUT_PULL_UP)
KeyPad_tenuErrorStatus KeyPad_GetPressedKey(KeyPad_tenuPressedKey* KeyReturnAddress) 	//Note that this function has something missing...
{
	KeyPad_tenuPressedKey Loc_KeyValue = KeyPad_enuNotPressed;
	u8 Loc_KeyGetReturn = 0;
	
	KeyPad_voidActivateRow(KEYPAD_ROW1);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu1;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu2;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu3;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuLow)
		{
			Loc_KeyValue = KeyPad_enuA; 			//and same for the remaining keys B, C and D
		}
	#endif
		
	_delay_ms(5); 							//after all keys are done
	
	KeyPad_voidActivateRow(KEYPAD_ROW2);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu4;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu5;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu6;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuLow)
		{
			Loc_KeyValue = KeyPad_enuB; 			
		}
	#endif
		
	_delay_ms(5);

	KeyPad_voidActivateRow(KEYPAD_ROW3);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu7;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu8;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu9;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuLow)
		{
			Loc_KeyValue = KeyPad_enuC; 			
		}
	#endif
		
	_delay_ms(5);
	
	KeyPad_voidActivateRow(KEYPAD_ROW4);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enuStar;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enu0;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuLow)
	{
		Loc_KeyValue = KeyPad_enuHash;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuLow)
		{
			Loc_KeyValue = KeyPad_enuD; 			
		}
	#endif
		
	*Addr_PenuKeyPressed = LOC_KeyValue;
}


void KeyPad_voidActivateRow(u8 Cpy_u8RowNum)
{
	DIO_SetPin(KEYPAD_ROW1, DIO_enuHigh);
	DIO_SetPin(KEYPAD_ROW2, DIO_enuHigh);
	DIO_SetPin(KEYPAD_ROW3, DIO_enuHigh);
	DIO_SetPin(KEYPAD_ROW4, DIO_enuHigh);
	
	DIO_SetPin(Cpy_u8RowNum, DIO_enuLow);
}

#endif




#if (KEYPAD_STATE == KEYPAD_INPUT_PULL_UP)
KeyPad_tenuErrorStatus KeyPad_GetPressedKey(KeyPad_tenuPressedKey* KeyReturnAddress) 	//Note that this function has something missing...
{
	KeyPad_tenuPressedKey Loc_KeyValue = KeyPad_enuNotPressed;
	u8 Loc_KeyGetReturn = 0;
	
	KeyPad_voidActivateRow(KEYPAD_ROW1);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu1;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu2;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu3;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuHigh)
		{
			Loc_KeyValue = KeyPad_enuA; 			//and same for the remaining keys B, C and D
		}
	#endif
		
	_delay_ms(5); 							//after all keys are done
	
	KeyPad_voidActivateRow(KEYPAD_ROW2);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu4;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu5;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu6;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuHigh)
		{
			Loc_KeyValue = KeyPad_enuB; 			
		}
	#endif
		
	_delay_ms(5);

	KeyPad_voidActivateRow(KEYPAD_ROW3);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu7;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu8;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu9;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuHigh)
		{
			Loc_KeyValue = KeyPad_enuC; 			
		}
	#endif
		
	_delay_ms(5);
	
	KeyPad_voidActivateRow(KEYPAD_ROW4);
	DIO_GetPin(KEYPAD_COL1, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enuStar;
	}
	DIO_GetPin(KEYPAD_COL2, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enu0;
	}
	DIO_GetPin(KEYPAD_COL3, &Loc_KeyGetReturn)
	if( Loc_KeyGetReturn == DIO_enuHigh)
	{
		Loc_KeyValue = KeyPad_enuHash;
	}
	
	#if (KEYPAD_SIZE == KEYPAD_4X4)
		DIO_GetPin(KEYPAD_COL4, &Loc_KeyGetReturn)
		if( Loc_KeyGetReturn == DIO_enuHigh)
		{
			Loc_KeyValue = KeyPad_enuD; 			
		}
	#endif
		
	*Addr_PenuKeyPressed = LOC_KeyValue;
}


void KeyPad_voidActivateRow(u8 Cpy_u8RowNum)
{
	DIO_SetPin(KEYPAD_ROW1, DIO_enuLow);
	DIO_SetPin(KEYPAD_ROW2, DIO_enuLow);
	DIO_SetPin(KEYPAD_ROW3, DIO_enuLow);
	DIO_SetPin(KEYPAD_ROW4, DIO_enuLow);
	
	DIO_SetPin(Cpy_u8RowNum, DIO_enuHigh);
}

#endif