#ifndef _HX_711_H
#define _HX_711_H

#define PORTE 	_SFR_IO8(0x0E)
#define DDRE	_SFR_IO8(0x0D)
#define PINE	_SFR_IO8(0x0C)
#define PE2	2
#define PE3	3

#include <stdint.h>

extern int32_t hx711_values[4];
void hx711_init();
void hx711_tick();

#endif
