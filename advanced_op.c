#include "holberton.h"

/**
 * op_unsigned - main function
 * @arg: The argument pointer.
 *
 * Description: This function prints a unsigned int.
 *
 * Return: 0.
 */
int op_unsigned(va_list arg)
{
	unsigned int i, p, r;
	unsigned int n = va_arg(arg, int), count = 0;

	i = n;
	p = 1;
	r = i;

	while (r > 9)
	{
		p *= 10;
		r /= 10;
	}

	for (; p >= 1; p /= 10)
	{
		_putchar(((i / p) % 10) + '0');
		count++;
	}
	return (count);
}
