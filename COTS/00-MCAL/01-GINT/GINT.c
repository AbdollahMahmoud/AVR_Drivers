/*
 * GINT.c
 *
 * Created: 10/7/2022 10:09:31 PM
 *  Author: Abdollah Mahmoud
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GINT.h"
#include "GINT_Prv.h"


void GINT_Enable(void)
{
	SET_BIT(SREG_REG,GINT_I_Bit);
}
void GINT_Disable(void)
{
	CLR_BIT(SREG_REG,GINT_I_Bit);
}