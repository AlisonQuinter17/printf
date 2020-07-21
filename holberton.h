#ifndef PRINTF_H
#define PRINTF_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct base- struct token.
 *
 * @op: The identifier argument.
 * @f: The base function.
 */
typedef struct base
{
	char *op;
	int (*f)(va_list p);
} base_t;


/* General Prototypes */
int _printf(const char *format, ...);
int selector(int *i, const char *format, va_list x);

/* Basic Prototypes */
int op_char(va_list p);
int op_string(va_list p);
int op_percent();
int op_numbers(va_list arg);

/* Advanced Prototypes*/
int op_unsigned(va_list arg);

/* Auxiliar Prototypes */
int _putchar(char c);

#endif
