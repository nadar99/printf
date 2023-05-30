#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;

	num = _printf("Number:[%i]\n", '9');
	num2 = printf("Number:[%i]\n", '9');
	printf("num:[%d]\n", num);
	printf("num2:[%d]\n", num2);
	return (0);
}
