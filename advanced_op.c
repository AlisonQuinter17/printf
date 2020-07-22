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

/**
 * op_octal - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a octal number.
 *
 * Return: The total number of chacarters.
 */
int op_octal(va_list p)
{
	unsigned int oct = va_arg(p, int), buff[1000];
	int  count = 0, i;

	if (oct == 0)
	{
		_putchar('0');
		return (1);
	}

	while (oct > 0)
	{
		buff[count] = oct % 8;
		oct /= 8;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (count);
}

/**
 * op_binary - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a binary number.
 *
 * Return: The total number of characters.
 */
int op_binary(va_list p)
{
	unsigned int bin = va_arg(p, int), buff[1000];
	int  count = 0, i;

	if (bin == 0)
	{
		_putchar('0');
		return (1);
	}

	while (bin > 0)
	{
		buff[count] = bin % 2;
		bin /= 2;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	return (count);
}

/**
 * print_rev - main function
 * @p: The argument pointer.
 *
 * Description: This function reverse a string.
 *
 * Return: The total number of characters.
 */
int print_rev(va_list p)
{
	int i = 0, count = 0;
	char *s = va_arg(p, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i])
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}

/**
 * rot13 - main function
 * @p: The argument pointer.
 *
 * Description: This function prints the rot13'ed string.
 *
 * Return: The total number of characters.
 */
int rot13(va_list p)
{
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j, i = 0, count = 0, pl = 0;
	char *s = va_arg(p, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		pl = 0;
		for (j = 0; alph[j] != '\0' && !pl; j++)
		{
			if (s[i] == alph[j])
			{
				_putchar(rot13[j]);
				count++;
				pl = 1;
			}
		}
		if (!pl)
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}
	return (count);
}
