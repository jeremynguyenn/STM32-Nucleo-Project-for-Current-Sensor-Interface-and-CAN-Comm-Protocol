/*
 * uart_functions.h
 *
 *      Author: Nguyen Nhan
 */

#ifndef UART_FUNCTIONS_H_
#define UART_FUNCTIONS_H_

#include "global.h"
char uart_getchar(void);
void uart_putchar(char data);
int __io_getchar(void);
int __io_putchar(int ch);
void echo(void);
void uart_printstring(char *message);


#endif /* UART_FUNCTIONS_H_ */
