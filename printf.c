#include "holberton.h"

/**
 * _printf - main function.
 * @format:A list of types of arguments passed to the function.
 * @...: The parameters to print.
 *
 * Description: This function prints everything.
 *
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list x;
	int i = 0, count = 0;

	va_start(x, format);

	if (!format || format[i] == '\n' || format[i] == '\0' ||
	   (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			count += selector(&i, format, x);

		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(x);
	return (count);
}
