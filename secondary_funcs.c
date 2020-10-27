#include <stdio.h>
#include "holberton.h"

/**
 * *my_itoa - converts an integer value (+ve or =ve) to a string
 * @num: integer value to be converted to a string
 * Return: character array containing converted integer/s/
 */
char *my_itoa(int num)
{
	char *str;
	int index;
	unsigned int temp;

	index = loop_num(num);

	if (num < 0)
	{
		index++;
		temp = num * (-1);
	}
	else
	{
		temp = num;
	}

	str = malloc(sizeof(char) * index);
	if (str == NULL)
	{
		return (NULL);
	}
	index--;

	while (temp != 0)
	{
		*(str + index) = (unsigned char)(temp % 10 + '0');
		temp = temp / 10;
		index--;
	}

	if (index == 0 && num < 0)
	{
		*(str + index) = '-';
	}
	return (str);
}

/**
 * loop_num - Evaluates numbers to be printed by printf func
 * @value: numbers to be evaluated
 * Return: integer
 */
int loop_num(int value)
{
	int index = 0;

	while (value != 0)
	{
		value = value / 10;
		index++;
	}
	return (index);
}
