/*
 * Timer.h
 *
 * Created: 12/17/2022 7:15:03 AM
 *  Author: ebrahem
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#define NumOfOverflow 19531
#include "../../UTILITIES/Registers.h"
 


void Timer_init();
void Time_delay();
void Timer_stop();

#endif /* TIMER_H_ */