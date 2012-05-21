
#ifndef DIGITALIN_H
#define DIGITALIN_H

#include <stdio.h>
#include <machine.h>
#include "iodefine.h"
#include "PinName.h"

class DigitalIn {

public:
    DigitalIn(PinName pin, const char *name = NULL);
    int read(void) ;
	operator int();

private:
   	PinName p ;
	int readBit ;
	int bitPos ;
	unsigned char *ioAddr ;
	const char *DOname ;
} ;


#endif