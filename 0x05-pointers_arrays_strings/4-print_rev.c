#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - prints string in reverse order
* @s: is a pointer variable used in function to hold string
* On success: return no error
*/
void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		_putchar(*(s + i));
	}
	_putchar (10);
}
