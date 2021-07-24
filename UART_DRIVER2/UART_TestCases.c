/*
 * UART_TestCases.c
 *
 * Created: 7/24/2021 2:16:32 AM
 *  Author: DELLL
 */ 

#include "UART_TestCases.h"

extern enuErrorStatus_t gError ;

enuErrorStatus_t UART_Init_Test(void)
{
	return gError;
}

enuErrorStatus_t UART_SendData_Test(void)
{
	return UART_SendData('M');
}

enuErrorStatus_t UART_ReceiveData_Test(uint8_t* pu8data)
{
	return UART_ReceiveData(pu8data);
}

enuErrorStatus_t UART_SendString_Test(void)
{
	uint8_t x="MOHAMED\r"; /* the \r is for the Enter press , it can be replaced by \0*/
	return UART_SendString(x);
}

enuErrorStatus_t UART_ReceiveString_Test(uint8_t* pu8string)
{
	
	return UART_ReceiveString(pu8string,MAX_LEN);
}