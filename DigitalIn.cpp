

#include "DigitalIn.h"

DigitalIn::DigitalIn(PinName pin, const char *name){

	readBit  = 0x1 << (pin % 8) ; 
	bitPos = pin % 8 ;
	ioAddr = (unsigned char *)&(PORT0.PIDR) + pin/8 ;
	*(unsigned char *)(&(PORT0.PODR) + pin/8) &= (~readBit) ; // set the bit to Input
	DOname = name ;
		
} 

int DigitalIn::read(){
	return (*ioAddr & readBit) >> bitPos ; 
}

DigitalIn:: operator int() { 
	return (*ioAddr & readBit) >> bitPos ; 
}  