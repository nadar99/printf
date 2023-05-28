#include "main.h"
#include <unistd.h>
/**
 * print_char - Print character
 * @c: character to print in ascii
 *
 * Return: 1 on success , -1 on error.
 */

int print_char(int c)
{
	return (_putchar(c));
}

/**
 * print_string - Print string
 * @s: string to print
 *
 * Return: length of the string on success , -1 on error.
 */

int print_string(char *s)
{
	int i;

	if (!s)
		return (write(1, "(null)", 6));

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
