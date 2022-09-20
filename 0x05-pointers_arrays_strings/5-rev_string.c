#include "main.h"
#include <string.h>

/**
* rev_string - print a string in reverse
* @s: is variable used to point to the string
* On success: return 0
*/
void rev_string(char *s)
{
	int l = 11;

	while (l--)
	{
		_putchar(*(s + l));
	}
}
