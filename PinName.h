
#ifndef PINNAME_H
#define PINNAME_H

#define _ORIGIN_PORT PORTA
enum PinName { p0 = ((char *)&(_ORIGIN_PORT) - (char *)&PORT0) * 8,
				p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15 } ;  /* just for now */

#endif