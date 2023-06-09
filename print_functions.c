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
  * print_int - Print integer
 * @list: va_list containig the integer to print
 * Return: 1 on success , -1 on error.
*/
int print_int(va_list list)
{
	int n = va_arg(list, int);

	
	if (n < 0)
	{
		n = -n;
		return (_putchar('0' + n));
	}
	else if (n == 0)
		return (_putchar('0' + 0));
	else if (n > 9)
	{
		int a = n / 10;

                n -= 10 * a;
		return (_putchar('0' + n));
	}
	else
		return (_putchar('0' + n));
}
