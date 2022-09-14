#include "main.h"

/**
 * _abs- computes the absolute value of an int
 * @int: is the variable used for function
 * Return: 0
 */
int _abs(int)
{
	int i
	
	if (i > 0 || i == 0)
	{
		_putchar(i);
	}
	else
	{
		_putchar(i * -1);
	}
	_putchar('\n');

	return (0);
}
