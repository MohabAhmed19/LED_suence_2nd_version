/*
 * LED.h
 *
 * Created: 4/6/2023 8:26:21 AM
 *  Author: Mohab
 */ 


#ifndef LED_H_
#define LED_H_


#include "../../utils/STD_TYPES.h"
#include "../../utils/registers.h"
#include "../../utils/utilities.h"
#include "../../MCAL/DIO/DIO.h"

uint8_t LED_init(uint8_t Port_number, uint8_t Pin_number);
uint8_t LED_ON(uint8_t Port_number, uint8_t Pin_number);
uint8_t LED_OFF(uint8_t Port_number, uint8_t Pin_number);


#endif /* LED_H_ */