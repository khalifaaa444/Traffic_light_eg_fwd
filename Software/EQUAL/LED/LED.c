/*
 * LED.c
 *
 * Created: 12/14/2022 7:45:36 PM
 *  Author: ebrahem
 */ 
#include "LED.h"
void LED_init(uint8_t port_num, uint8_t pin_num)
{
	dio_init(port_num,pin_num,OUT);
	
}
void LED_on(uint8_t port_num, uint8_t pin_num)
{
	dio_write(port_num,pin_num,HIGH);
}
void LED_off(uint8_t port_num, uint8_t pin_num)
{
	dio_write(port_num,pin_num,LOW);
}
void LED_toggle(uint8_t port_num, uint8_t pin_num)
{
	dio_toggle(port_num,pin_num);
}