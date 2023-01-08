/*
 * Modes.c
 *
 * Created: 12/17/2022 5:24:22 PM
 *  Author: ebrahem
 */ 

#include "Modes.h"

void Cars_stop()
{
	LED_on(Car_LedRed_Port,Car_LedRed_Pin);
	LED_off(Car_LedYellow_Port,Car_LedYellow_Pin);
	LED_off(Car_LedGreen_Port,Car_LedGreen_Pin);
	
}

void pedestrian_go()
{
	LED_on(pedestrian_LedGreen_Port,pedestrian_LedGreen_Pin);
	LED_off(pedestrian_LedYellow_Port,pedestrian_LedYellow_Pin);
	LED_off(pedestrian_LedRed_Port,pedestrian_LedRed_Pin);

}

void Cars_ready()
{

	LED_off(Car_LedRed_Port,Car_LedRed_Pin);
	LED_on(Car_LedYellow_Port,Car_LedYellow_Pin);
	LED_off(Car_LedGreen_Port,Car_LedGreen_Pin);
	
}
void pedestrian_ready()
{
	LED_off(pedestrian_LedGreen_Port,pedestrian_LedGreen_Pin);
	LED_on(pedestrian_LedYellow_Port,pedestrian_LedYellow_Pin);
	LED_off(pedestrian_LedRed_Port,pedestrian_LedRed_Pin);

}

void Cars_go()
{
	LED_off(Car_LedRed_Port,Car_LedRed_Pin);
	LED_off(Car_LedYellow_Port,Car_LedYellow_Pin);
	LED_on(Car_LedGreen_Port,Car_LedGreen_Pin);
	
}
void pedestrian_stop()
{
	LED_off(pedestrian_LedGreen_Port,pedestrian_LedGreen_Pin);
	LED_off(pedestrian_LedYellow_Port,pedestrian_LedYellow_Pin);
	LED_on(pedestrian_LedRed_Port,pedestrian_LedRed_Pin);
}
