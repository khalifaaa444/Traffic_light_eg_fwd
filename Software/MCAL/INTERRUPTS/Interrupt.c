/*
 * Interrupt.c
 *
 * Created: 12/17/2022 9:22:02 AM
 *  Author: ebrahem
 */ 

#include "Interrupt.h"
void INT_init()
{
	SREG |= (1<<7);
}
void INT_mode()
{
	MCUCR |= (1<<0);
	MCUCR |= (1<<1);
}

void INT_EXT()
{
	GICR |= (1<<6);
}

