#include "main.h"

/**
* factorial - prints the factorial of any number
* @n: nuber whose fatorial is to be printed
* Return:
*/
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return(1);
	}
	result = n * factorial(n - 1);
	return (result);
}
