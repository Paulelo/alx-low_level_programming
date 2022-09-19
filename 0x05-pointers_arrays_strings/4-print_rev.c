#include "main.h"

/**
* print_rev - prints string in reverse order
* @s: is a pointer variable used in function to hold string
* On success: return no error
*/
void print_rev(char *s)
{
	int i = 62;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar (10);
}
