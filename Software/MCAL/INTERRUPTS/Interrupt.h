/*
 * Interrupt.h
 *
 * Created: 12/17/2022 8:33:29 AM
 *  Author: ebrahem
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include "../../UTILITIES/Registers.h"

#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)


void INT_init();
void INT_mode();
void INT_EXT();




#endif /* INTERRUPT_H_ */
