#include "main.h"
/**
 * _printf - printf function.
 * @format: string format to print
 *
 * Return: number of bytes printed on success, -1 on error.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, count = 0;

	if (!format)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				int c = va_arg(list, int);

				if (c)
					count += print_char(c);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				print_char('%');
				i++;
			}
			else if (format[i + 1] == 's')
			{
				count += print_string(va_arg(list, char *));
				i++;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}

	return (count);
}
