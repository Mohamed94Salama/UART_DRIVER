/*
 * UART_DRIVER2.c
 *
 * Created: 7/14/2021 5:52:39 PM
 * Author : DELLL
 */ 

#include "UART.h"


int main(void)
{
    uint16_t x;
	UART_Init();
	SET_BIT(DDRA_R,0);
	uint8_t* arr;
	//UART_SendString_Test();
	/*UART_ReceiveData_Test(&x);
	if(x=='M')
	{
		SET_BIT(PORTA_R,0);
	}*/
	UART_ReceiveString_Test(arr);
	if(!strcmp(arr,"MOHAMED/r"))
	{
		SET_BIT(PORTA_R,0);
	}
    while (1) 
    {

	}
}
