#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: number of arguments
 * Return: modifiers
 */
int _printf(const char *format, ...)
{
	va_list args;
	int mods;

	specifiers_t  fmt_list[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"d", print_dec},
		{NULL, NULL}
	};

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	mods = print_modifiers(format, args, fmt_list);

	va_end(args);
	return (mods);
}

/**
 * print_modifiers - function to check the format specifiers
 * @fmt: list of types of arguments passed to the function
 * @argptr: argument list pointer to string to be printed
 * @fmt_list: pointer to a struct containing specifiers
 * Return: int
 */
int print_modifiers(const char *fmt, va_list argptr, specifiers_t *fmt_list)
{
	int index = 0, arg_len = 0, ret = 0;

		while (fmt[index] != '\0' && fmt != NULL)
		{
			if (fmt[index] == '%')
			{
				if (fmt[index + 1] == ' ')
				{
					index++;
				}
				while (arg_len < 4)
				{
					if (fmt[index + 1] == fmt_list[arg_len].specifier[0])
					{
						ret = ret + fmt_list[arg_len].func_specifier(argptr);
						index++;
							break;
					}
					arg_len++;
				}
				if (arg_len == 4)
				{
					ret += f_putchar(fmt[index]);
				}
				else if (fmt[index] == '%' && fmt[index + 1] == '%')
				{
					ret += f_putchar('%');
					index++;
				}
				else
				{
					ret += f_putchar(fmt[index]);
				}
			}
			index++;
		}
	return (ret);
}
