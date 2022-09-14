#include "main.h"

/**
 * _abs- computes the absolute value of an int
 * @i: is the variable used for function
 * Return: 0
 */
int _abs(int i)
{
	if (i > 0 || i == 0)
	{
		return(i);
	}
	else
	{
		return(i * -1);
	}
}
