

#include "DigitalOut.h"

DigitalOut::DigitalOut(PinName pin, const char *name){

		setBit  = 0x1 << (pin % 8) ; /*** TBD need to adjust board pin asign ***/
		resetBit = ~setBit ;
		ioAddr = (unsigned char *)&(PORTA.PODR) + pin/8 ;
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