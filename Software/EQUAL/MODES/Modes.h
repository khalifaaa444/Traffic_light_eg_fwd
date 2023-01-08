/*
 * Three_Leds.h
 *
 * Created: 12/17/2022 5:23:12 PM
 *  Author: ebrahem
 */ 


#ifndef MODES_H_
#define MODES_H_



#include "../../MCAL/INTERRUPTS/Interrupt.h"
#include "../../MCAL/TIMERS/Timer.h"
#include "../../ECUAL/LED/LED.h"



void Cars_stop();
void pedestrian_go();
void Cars_ready();
void pedestrian_ready();
void Cars_go();
void pedestrian_stop();


#endif /* MODES_H_ */