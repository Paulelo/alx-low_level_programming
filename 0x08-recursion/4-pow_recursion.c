#include "main.h"

/**
* _pow_recursion - prints value of x raised to power y
* @x: number to be raised
* @y: power to be raised to
* Return: res
*/
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y != 0)
		res = x * _pow_recursion(x, y - 1);
	return (res);
}
