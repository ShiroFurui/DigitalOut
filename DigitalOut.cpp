

#include "DigitalOut.h"

DigitalOut::DigitalOut(PinName pin, const char *name){

		setBit  = 0x1 << (pin % 8) ; 
		resetBit = ~setBit ;
		ioAddr = (unsigned char *)&(PORT0.PODR) + pin/8 ;
		*(unsigned char *)(&(PORT0.PODR) + pin/8) |= setBit ; // set the bit to Output
		DOname = name ;
} 

void DigitalOut::write(int value){
		/** TBD: set I/O direction to out */ 
		if(value) { *ioAddr |= setBit ; }
		else      { *ioAddr &= resetBit ; } 
}

void DigitalOut:: operator= (int value) { 
		if(value) { *ioAddr |= setBit ; }
		else      { *ioAddr &= resetBit ; } 
} 