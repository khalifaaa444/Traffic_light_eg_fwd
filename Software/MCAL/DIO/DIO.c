/*
 * DIO.c
 *
 * Created: 12/14/2022 7:56:28 AM
 *  Author: ebrahem
 */ 
#include "DIO.h"
void dio_init(uint8_t port_num , uint8_t pin_num , uint8_t direction)
{
	if(direction == 1)
	{
		
		
		switch(port_num)
		{
			case PORT_A:
			DDRA |= (1<<pin_num);
			break;
			case PORT_B:
			DDRB |= (1<<pin_num);
			break;
			case PORT_C:
			DDRC |= (1<<pin_num);
			break;
			case PORT_D:
			DDRD |= (1<<pin_num);
			break;
			default:
			break;
		}
		
	}
	else if(direction == 0)
	{
		
		switch(port_num)
		{
			case PORT_A:
			DDRA &= ~(1<<pin_num);
			break;
			case PORT_B:
			DDRB &= ~(1<<pin_num);
			break;
			case PORT_C:
			DDRC &= ~(1<<pin_num);
			break;
			case PORT_D:
			DDRD &= ~(1<<pin_num);
			break;
			default:
			break;
		}
	}
	
}	
	

void dio_write(uint8_t port_num , uint8_t pin_num , uint8_t state)
{
	if(state == HIGH)
	{
		
		
		switch(port_num)
		{
			case PORT_A:
			PORTA |= (1<<pin_num);
			break;
			case PORT_B:
			PORTB |= (1<<pin_num);
			break;
			case PORT_C:
			PORTC |= (1<<pin_num);
			break;
			case PORT_D:
			PORTD |= (1<<pin_num);
			break;
			default:
			break;
		}
		
	}
	else if(state == LOW)
	{
		
		switch(port_num)
		{
			case PORT_A:
			PORTA &= ~(1<<pin_num);
			break;
			case PORT_B:
			PORTB &= ~(1<<pin_num);
			break;
			case PORT_C:
			PORTC &= ~(1<<pin_num);
			break;
			case PORT_D:
			PORTD &= ~(1<<pin_num);
			break;
			default:
			break;
		}
	}
	
	
}

void dio_read(uint8_t port_num , uint8_t pin_num , uint8_t *state)
{
	switch(port_num)
	{
		case PORT_A:
		*state = (PINA & (1<<pin_num))>>pin_num;
		case PORT_B:
		*state = (PINB & (1<<pin_num))>>pin_num;
		case PORT_C:
		*state = (PINC & (1<<pin_num))>>pin_num;
		case PORT_D:
		*state = (PIND & (1<<pin_num))>>pin_num;
	}
}


void dio_toggle(uint8_t port_num , uint8_t pin_num )
{
	switch(port_num)
	{
		case PORT_A:
		PORTA ^= (1<<pin_num);
		break;
		case PORT_B:
		PORTB ^= (1<<pin_num);
		break;
		case PORT_C:
		PORTC ^= (1<<pin_num);
		break;
		case PORT_D:
		PORTD ^= (1<<pin_num);
		break;
		default:
		break;
	}
}