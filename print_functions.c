#include "main.h"
#include <unistd.h>

/**
 * print_char - Print character
 * @list: va_list containig the char  to print
 *
 * Return: 1 on success , -1 on error.
 */

int print_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * print_string - Print string
 * @list: va_list containig the string to print
 *
 * Return: length of the string on success , -1 on error.
 */

int print_string(va_list list)
{
	int i;
	char *s = va_arg(list, char *);

	if (!s)
		return (write(1, "(null)", 6));

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}

/**
  * print_int - Print integer by converting to char first
 * @list: va_list containig the integer to print
 * Return: 1 on success , -1 on error.
 */
int print_int(va_list list)
{
	int i;
	int *n = va_arg(list, int *);
	for (i = 0; n[i] != '\0'; i++)
	_putchar(n[i]+'0');

	return (i);
}
