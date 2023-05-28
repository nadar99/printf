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
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			/** printf("%")**/
			else if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else if (select_print_function(format[i + 1]) != NULL)
			{
				count += (select_print_function(format[i + 1]))(list);
			}
			else
			{
				count += _putchar(format[i + 1]);
			}
			i++;
		}
		else
		{
			count += _putchar(format[i]);
		}
	}

	return (count);
}
