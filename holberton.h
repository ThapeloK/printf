#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * struct specifiers - Defines a specifier to data types
 * @specifier: type of data type
 * @func_specifier: pointer to function that prints data types
 * according to their notation
 */
typedef struct specifiers
{
	char *specifier;
	int (*func_specifier)(va_list argptr);
} specifiers_t;

/* printf.c prototypes */
int _printf(const char *format, ...);
int print_modifiers(const char *fmt, va_list argptr, specifiers_t *fmt_list);

/* specifier_funcs.c prototypes */
int print_char(va_list argptr);
int print_int(va_list argptr);
int print_string(va_list argptr);
int print_dec(va_list argptr);

/* secondary.funcs.c prototypes */
int _is_digit(int i);
char *_strcat(char *dest, char *src);
char *my_itoa(int num);
int loop_num(int value);

/* f_putchar.c prototype */
int f_putchar(char c);

#endif /* HOLBERTON_H */
