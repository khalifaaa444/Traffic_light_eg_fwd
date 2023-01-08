/*
 * DIO.h
 *
 * Created: 12/14/2022 7:56:10 AM
 *  Author: ebrahem
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../../UTILITIES/Registers.h"

void dio_init(uint8_t port_num , uint8_t pin_num , uint8_t direction);
void dio_write(uint8_t port_num , uint8_t pin_num , uint8_t state);
void dio_read(uint8_t port_num , uint8_t pin_num , uint8_t *state);
void dio_toggle(uint8_t port_num , uint8_t pin_num );


#endif /* DIO_H_ */