
#ifndef DIGITALOUT_H
#define DIGITALOUT_H

#include <stdio.h>
#include <machine.h>
#include "iodefine.h"
#include "PinName.h"

class DigitalOut {

public:
    DigitalOut(PinName pin, const char *name = NULL);
    void write(int value) ;
	void operator= (int value) ;

private:
   	PinName p ;
	int setBit ;
	int resetBit ;
	unsigned char *ioAddr ;
	const char *DOname ;
} ;


#endif