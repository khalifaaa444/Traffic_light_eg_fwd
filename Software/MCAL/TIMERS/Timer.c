/*
 * Timer.c
 *
 * Created: 12/17/2022 8:15:01 AM
 *  Author: ebrahem
 */ 
#include "Timer.h"

void Timer_init()
{
	TCCR0 |= (1<<0);
}
void Time_delay()
{
	uint32_t overflowcount=0;
	while(overflowcount <= NumOfOverflow)
	{
		while((TIFR & (1<<0)) == 0);
		TIFR |= (1<<0);
		overflowcount = overflowcount+1;
	}
}

void Timer_stop()
{
	TCCR0 = 0x00;
}