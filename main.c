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
	int n = _printf("char is %c %% %s %s\n", 'c', "this is a string", NULL);
	
	printf("n = %d\n", n);
	return (0);
}
