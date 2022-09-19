#include "main.h"

/**
* swap_int - takes to integers and swaps their value
*
* @a: first integer
*
* @b: second integer
*
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = *c;
}
