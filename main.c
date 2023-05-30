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
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Len:[%d]\n", len);
	printf("Len2:[%d]\n", len2);

	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Len:[%d]\n", len);
	printf("Len2:[%d]\n", len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Len:[%d]\n", len);
	printf("Len2:[%d]\n", len2);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len2:[%d]\n", len2);
/**
 *      len = _printf("% this is a error %s", NULL);
 *      len2 = printf("% this is a error %s", NULL);
 *      printf("Len:[%d]\n", len);
 *      printf("Len2:[%d]\n", len2);
*
 *      len = _printf("%");
 *      len2 = printf("%");
 *      printf("Len:[%d]\n", len);
 *      printf("Len2:[%d]\n", len2);

 *      len = _printf("Let's try to printf a simple %s.\n", NULL);
 *      len2 = printf("Let's try to printf a simple %s.\n", NULL);
 *      printf("Len:[%d]\n", len);
 *      printf("Len2:[%d]\n", len2);
**/
	return (0);
}
