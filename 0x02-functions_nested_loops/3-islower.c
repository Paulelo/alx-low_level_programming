#include "main.h"

/**
 * _islower- checks for lowercase characters
 * @c: is the var used for the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
