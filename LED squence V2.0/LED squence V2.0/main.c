/*
 * main.c
 *
 * Created: 4/10/2023 12:46:59 AM
 *  Author: Mohab
 */ 

#include<avr/interrupt.h>
#include "utils/registers.h"
#include "utils/STD_TYPES.h"
#include "utils/utilities.h"
#include "MCAL/DIO/DIO.h"
#include "MCAL/Interrupt/Interrupt.h"
#include "ECUAL/LED/LED.h"
#include "ECUAL/Push_Button/Push_bottun.h"

static uint8_t case_no=0;

int main(void)
{
	/* Replace with your application code */
	LED_init(Port_A,PIN_0);
	LED_init(Port_A,PIN_1);
	LED_init(Port_A,PIN_2);
	LED_init(Port_A,PIN_3);
	ex_int_init(Interrupt_0,rising_edge);
	
	while (1)
	{
		switch(case_no)
		{
			case 0:
			LED_OFF(Port_A,PIN_0);
			LED_OFF(Port_A,PIN_1);
			LED_OFF(Port_A,PIN_2);
			LED_OFF(Port_A,PIN_3);
			break;
			case 1:
			LED_ON(Port_A,PIN_0);
			break;
			case 2:
			LED_ON(Port_A,PIN_1);
			break;
			case 3:
			LED_ON(Port_A,PIN_2);
			break;
			case 4:
			LED_ON(Port_A,PIN_3);
			break;
			case 5:
			LED_OFF(Port_A,PIN_0);
			break;
			case 6:
			LED_OFF(Port_A,PIN_1);
			break;
			case 7:
			LED_OFF(Port_A,PIN_2);
			break;
			
		}
	}
}

ISR(INT0_vect)
{
	if(case_no<=6)
	{
		case_no++;
	}
	else
	{
		case_no=0;
	}
}