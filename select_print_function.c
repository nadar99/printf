#include "main.h"
/**
 * select_print_function - function to select
 * the print function according to the c.
 * @c: charchter stands for format specifier
 *
 * Return: pointer to a function that returns int and take va_list .
 */
int (*select_print_function(char c))(va_list)
{
	int i;
	print st[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

	for (i = 0; st[i].s != '\0'; i++)
	{
		if (st[i].s == c)
			return (st[i].f);
	}

	return (NULL);
}
