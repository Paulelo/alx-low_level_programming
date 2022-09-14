#include "main.h"

/**
 * _isalpha- checks for lowercase characters
 * @c: is the var used for the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' &&  c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
