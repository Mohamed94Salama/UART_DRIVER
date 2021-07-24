/*
 * UART_TestCases.h
 *
 * Created: 7/24/2021 2:16:14 AM
 *  Author: DELLL
 */ 


#ifndef UART_TESTCASES_H_
#define UART_TESTCASES_H_

#include "UART.h"

enuErrorStatus_t UART_Init_Test(void);

enuErrorStatus_t UART_SendData_Test(void);

enuErrorStatus_t UART_ReceiveData_Test(uint8_t* pu8data);

enuErrorStatus_t UART_SendString_Test(void);

enuErrorStatus_t UART_ReceiveString_Test(uint8_t* pu8string);

#endif /* UART_TESTCASES_H_ */