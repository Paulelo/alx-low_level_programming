#include "main.h"

/**
 * print_last_digit- prints last digit of a number
 * @i: is the variable used with functionfunction
 * Return: 0
 */
int print_last_digit(int i);
{
	if (i >= 10 || i <= -10)
	{
		_putchar (i % 10);
	}
	else
	{
		return (i);
	}
}
