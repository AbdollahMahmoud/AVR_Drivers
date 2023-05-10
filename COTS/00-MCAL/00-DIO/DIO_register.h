/*************************************************************
 * 
 * Filename: DIO_Config.c
 * Description: Configuration source file of the DIO driver.
 * Author: Abdollah Mahmoud
 * Github: $$$_GITHUB_URL_$$$
 * 
 *************************************************************/


#ifndef	__DIO_REGISTER_H__
#define __DIO_REGISTER_H__




#define	DDRA				*((volatile u8*) 0x3A)
#define	PORTA			*((volatile u8*) 0x3B)
#define	PINA				*((volatile u8*) 0x39)


#define	DDRB				*((volatile u8*) 0x37)
#define	PORTB			*((volatile u8*) 0x38)
#define	PINB				*((volatile u8*) 0x36)


#define	DDRC				*((volatile u8*) 0x34)
#define	PORTC			*((volatile u8*) 0x35)
#define	PINC				*((volatile u8*) 0x33)


#define	DDRD				*((volatile u8*) 0x31)
#define	PORTD			*((volatile u8*) 0x32)
#define	PIND				*((volatile u8*) 0x30)


#endif		/*__DIO_REGISTER_H__*/
