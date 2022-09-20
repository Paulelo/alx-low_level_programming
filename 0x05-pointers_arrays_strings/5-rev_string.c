#include "main.h"
#include <string.h>

/**
* rev_string - print a string in reverse
* @s: is variable used to point to the string
* On success: returns nothing
*/
void rev_string(char *s)
{
	int i = 5000;

	while (i--)
	{
		_putchar(*(s + i));
	}
}
