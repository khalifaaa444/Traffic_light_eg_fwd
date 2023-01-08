/*
 * GccApplication1.c
 *
 * Created: 12/14/2022 6:15:14 AM
 *  Author: ebrahem
 */ 


#include "Application/app.h"

extern uint8_t flag;

int main(void)
{
	app_init();
	
    while(1)
    {
		app_start();
    }
}

ISR(EXT_INT_0)
{
	if (flag == 0)
	{
		flag = 0;
	}
	else
	{
		flag = 3;
	}
}
