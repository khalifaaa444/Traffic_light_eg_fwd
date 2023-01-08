/*
 * app.c
 *
 * Created: 12/17/2022 3:04:30 PM
 *  Author: ebrahem
 */ 
#include "app.h"
uint8_t flag=0;
void app_init()
{
	Timer_init();
	
	INT_init();
	INT_mode();
	INT_EXT();
	LED_init(Car_LedRed_Port,Car_LedRed_Pin);
	LED_init(Car_LedYellow_Port,Car_LedYellow_Pin);
	LED_init(Car_LedGreen_Port,Car_LedGreen_Pin);
	LED_init(pedestrian_LedRed_Port,pedestrian_LedRed_Pin);
	LED_init(pedestrian_LedYellow_Port,pedestrian_LedYellow_Pin);
	LED_init(pedestrian_LedGreen_Port,pedestrian_LedGreen_Pin);
	
}

void app_start()
{
	if (flag==0)
	{
		Cars_go();
		pedestrian_stop();
		Time_delay();
		Timer_stop();
		
		if (flag == 0)
		{
			flag=1;
		}
		
	}
	
	else if (flag==1)
	{
		Cars_ready();
		pedestrian_ready();
		Time_delay();
		Timer_stop();
		if (flag == 1)
		{
			flag=2;
		}
	}
	else if(flag==2)
	{
		Cars_go();
		pedestrian_stop();
		Time_delay();
		Timer_stop();
		if (flag == 2)
		{
			flag=3;
		}
	}
	else if(flag == 3)
	{
		Cars_ready();
		pedestrian_ready();
		Time_delay();
		Timer_stop();
		if (flag == 3)
		{
			flag=0;
		}
	}
	
}

