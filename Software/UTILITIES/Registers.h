/*
 * Registers.h
 *
 * Created: 12/14/2022 6:30:28 AM
 *  Author: ebrahem
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "../UTILITIES/typedef.h"

#define PORTA *((volatile uint8_t*)0x3b)
#define DDRA  *((volatile uint8_t*)0x3a)
#define PINA  *((volatile uint8_t*)0x39)

#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)

#define TCCR0 *((volatile uint8_t*)0x53)
#define TCNT0 *((volatile uint8_t*)0x52)
#define TIFR *((volatile uint8_t*)0x58)

#define SREG *((volatile uint8_t*)0x5f)
#define MCUCR *((volatile uint8_t*)0x55)
#define GICR *((volatile uint8_t*)0x5b)
#define GIFR *((volatile uint8_t*)0x5a)



#endif /* REGISTERS_H_ */