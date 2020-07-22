#include "holberton.h"

/**
 * selector - main function.
 * @format: The dimension of the parameters passed.
 * @...: The parameters to print.
 * @i: The pointer of the format position.
 * @x: The variable to print.
 *
 * Description: This function selects the correct function
 * asked by the user for calls it.
 *
 * Return: The total number of characters of the functions called.
 */

int selector(int *i, const char *format, va_list x)
{
	int count = 0;
	int k = *i, l = 0;

	base_t ops[] = {
		{"c", op_char},
		{"s", op_string},
		{"%", op_percent},
		{"d", op_numbers},
		{"i", op_numbers},
		{"u", op_unsigned},
		{"o", op_octal},
		{"b", op_binary},
		{"r", print_rev},
		{"R", rot13},
		{NULL, NULL}
	};

	int c = 0;

	while (c < 10)
	{
		if (*(ops[c].op) == format[k + 1])
		{
			count += ops[c].f(x);
			*i += 1;
		}
		else
		{
			l++;
		}
		c++;
	}

	if (l == 10)
	{
		_putchar(format[k]);
		count++;
	}

	return (count);
}
