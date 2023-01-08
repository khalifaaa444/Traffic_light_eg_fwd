/*
 * LED.h
 *
 * Created: 12/14/2022 7:45:17 PM
 *  Author: ebrahem
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO/DIO.h"
void LED_init(uint8_t port_num, uint8_t pin_num);
void LED_on(uint8_t port_num, uint8_t pin_num);
void LED_off(uint8_t port_num, uint8_t pin_num);
void LED_toggle(uint8_t port_num, uint8_t pin_num);

#endif /* LED_H_ */