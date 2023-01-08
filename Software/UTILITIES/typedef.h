/*
 * typedef.h
 *
 * Created: 12/14/2022 6:39:32 AM
 *  Author: ebrahem
 */ 


#ifndef TYPEDEF_H_
#define TYPEDEF_H_


typedef unsigned char uint8_t;
typedef unsigned int uint32_t;

#define PORT_A 1
#define PORT_B 2
#define PORT_C 3
#define PORT_D 4
#define IN 0
#define OUT 1
#define HIGH 1
#define LOW 0

#define Car_LedRed_Port                  PORT_A
#define Car_LedRed_Pin                   2
#define Car_LedYellow_Port               PORT_A
#define Car_LedYellow_Pin                1
#define Car_LedGreen_Port                PORT_A
#define Car_LedGreen_Pin                 0
#define pedestrian_LedRed_Port           PORT_B
#define pedestrian_LedRed_Pin            0
#define pedestrian_LedYellow_Port        PORT_B
#define pedestrian_LedYellow_Pin         1
#define pedestrian_LedGreen_Port         PORT_B
#define pedestrian_LedGreen_Pin          2

#define Button_EXT_PORT                  PORT_D
#define Button_EXT_PIN                   2

//uint8_t flag=0;
#endif /* TYPEDEF_H_ */