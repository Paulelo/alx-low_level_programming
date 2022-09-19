#include "main.h"

/**
* _puts - prints a string followed by a new line
* @str: is the pointer variable used in the function
* On success: returns no error
*/
void _puts(char *str)
{
	int i = 0;
	while (*(str+i) != '\0')
	{
		_putchar(*(str+i));
		i++;
	}
	_putchar(10);
}
