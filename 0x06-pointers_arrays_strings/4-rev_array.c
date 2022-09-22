#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: first param
* @n: second param
* Return: reverse array of int
*/
void reverse_array(int *a, int n)
{
	int *p, i, rev, k;

	p = a;

	for (i = 0 ; i < n ; i++)
		p++;
	for (k = 0 ; k < n / 2 ; k++)
	{
		rev = a[k];
		a[k] = *p;
		*p = rev;
		p--;
	}
	a[k + 1] = '\0';
}
