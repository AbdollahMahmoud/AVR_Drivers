/*******************************************/
/*SSEGMENT Driver
Target: ATMEGA32
Author :Abdollah Mahmoud
 Date:2023-01-27 */ 
/*******************************************/


#include "SSEGMENT.h"
#include "SSEGMENT_Cfg.h"
#include "SSEGMENT_Prv.h"

const u8 Digits [10] = {
    [ZERO] =  0b00111111,
    [ONE] =   0b00000110,
    [TWO] =   0b01011011,
    [THREE] = 0b01001111,
    [FOUR] =  0b01100110,
    [FIVE] =  0b01101101,
    [SIX] =   0b01111101,
    [SEVEN] = 0b00000111,
    [EIGHT] = 0b01111111,
    [NINE] =  0b01101111
};