/*******************************************/
/*SSEGMENT Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-27*/
/*******************************************/
#ifndef _SSEGMENT_H
#define _SSEGMENT_H



typedef enum{
    SSEG_enuOk = 0,
    SSEG_enuNotOk
}SSEG_tenuErrorStatus;

typedef enum{
	SSEG_PortA,
	SSEG_PortB,
	SSEG_PortC,
	SSEG_PortD
}SSEG_tenuPorts;


SSEG_tenuErrorStatus SSEG_enuSetDigit(SSEG_tenuPorts Cpy_enuPort, u8 Cpy_u8Number);

#endif /*SSEGMENT_H*/
