#include "holberton.h"

int op_unsigned(va_list arg)
{
	unsigned int i, p, r;
	unsigned int n = va_arg(arg, int);

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
	}
	return(0);
}
