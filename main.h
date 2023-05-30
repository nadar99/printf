#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_st - specifier structure
 * @s: char for specifier
 * @f : function pointer to print fucntion
 **/

typedef struct print_st
{
	char s;
	int (*f)(va_list);
} print;

int _printf(const char *format, ...);
int _putchar(char c);

/** print_functions.c **/
int print_char(va_list list);
int print_string(va_list list);
int print_i(va_list list);
int print_int(int num)

int (*select_print_function(char c))(va_list);

#endif
