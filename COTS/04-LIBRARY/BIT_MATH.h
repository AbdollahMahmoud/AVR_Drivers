#ifndef BIT_MATH_H
#define BIT_MATH_H


#define SET_BIT(REG,Bit_NO)     (REG) |= (1<<(Bit_NO)) // For example !

#define CLR_BIT(REG,Bit_NO)     (REG) &= (!(1<<(Bit_NO)))

// Get The Bit number Bit_NO
#define GET_BIT(REG,Bit_NO)     (REG >> Bit_NO) & 1
                                    
// Right Shift by No
#define RSHFT_REG(REG,NO)       (REG) >>= NO

// Left Shift by NO
#define LSHFT_REG(REG,NO)       (REG) <<= NO

// Circular Right Shift
#define CRSHFT_REG(REG,NO)      REG = ((REG) >> NO) | (REG << (8-NO))

// Circular Left Shift
#define CLSHFT_REG(REG,NO)	REG = ((REG) << NO) | (REG >> (8-NO))

// Assign a Value to a Register
#define ASSIGN_REG(REG,VALUE)	REG = (REG >> 8) | VALUE

// Set The Register [1s]
#define SET_REG(REG)		REG = (REG >> 8) | 255

// Clear the Register [0s]
#define CLR_REG(REG)		REG = (REG >> 8) | 0

// Toggle a Bit in Register
#define TGL_BIT(REG,Bit_NO)	REG = REG ^ (1<<Bit_NO)

// Toggle a Register Value
#define TGL_REG(REG)		REG = REG ^ 255

/* 
	Note : High nibble is always at position [4:7]
		   Low nibble is always at position [3:0]
*/
// Set The High Nibble in a Register .  
#define SET_H_NIB(REG)		REG = REG | 0b11110000

// Set The Low Nibble in a Register .  
#define SET_L_NIB(REG)		REG = REG | 0b00001111

// Clear The High Nibble in a Register . 
#define CLR_H_NIB(REG)		REG = REG & 0b00001111

// Clear The Low Nibble in a Register . 
#define CLR_L_NIB(REG)		REG = REG & 0b11110000

// Get The High Nibble in a Register .  
#define GET_H_NIB(REG)		((REG & 0b11110000) >> 4)

// Get The Low Nibble in a Register .  
#define GET_L_NIB(REG)		 REG & 0b00001111

// Assign The High Nibble in a Register
#define ASSIGN_H_NIB(REG,VALUE)	REG = REG | (VALUE << 4)

// Assign the Low Nibble in a Register
#define ASSIGN_L_NIB(REG,VALUE)	REG = REG | VALUE

// Toggle the High Nibble in a Register
#define TGL_H_NIB(REG)		REG = REG ^ 0b11110000

// Toggle the Low Nibble in a Register
#define TGL_L_NIB(REG)		REG = REG ^ 0b00001111

// Swap the Nibbles in a Register
#define SWAP_NIB(REG)		REG = ((REG >> 4) | (REG << 4))



#endif