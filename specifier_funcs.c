#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - function that prints character
 * @argptr: argument list pointer to character to be printed
 * Return: int
 */
int print_char(va_list argptr)
{
	char character;

	character = va_arg(argptr, int);
	f_putchar(character);
	return (1);
}

/**
 * print_string - function that prints string
 * @argptr: argument list pointer to string to be printed
 * Return: int
 */
int print_string(va_list argptr)
{
	char *str;
	unsigned int index;

	str = va_arg(argptr, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	index = 0;
	while (str[index] != '\0')
	{
		f_putchar(str[index]);
		index++;
	}
	return (index);
}

/**
 * print_int - function that prints integer
 * @argptr: argument list pointer to integer to be printed
 * Return: int
 */
int print_int(va_list argptr)
{
	unsigned int index, count = 1;

	index = va_arg(argptr, int);

	loop_num(index);

	if (index < 10)
	{
		return (count);
	}
	else
	{
		while ((index / 10) > 0)
		{
			index = index / 10;
			count++;
		}
		return (count);
	}
}

/**
 * print_dec - function that prints a float
 * @argptr: argument list pointer to string to be printed
 * Return: int
 */
int print_dec(va_list argptr)
{
	char *buffer;
	int index, num;

	num = va_arg(argptr, int);

	if (!num)
	{
		num = 0;
	}

	index = loop_num(num);

	if (num < 0)
	{
		index++;
	}

	buffer = my_itoa(num);
	write(1, buffer, sizeof(char) * index);

	free(buffer);
	return (index);
}
