#include "main.h"
#include <string.h>

/**
* rev_string - print a string in reverse
* @s: is variable used to point to the string
* On success: returns nothing
*/
void rev_string(char *s)
{
	char p;
	int i;

	*s = s;
	p = *s;
	i = strlen(p);

	while (i--)
	{
		_putchar(*(s + i));
	}
}
