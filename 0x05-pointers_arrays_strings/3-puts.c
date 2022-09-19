#include "main.h"

/**
* _puts - prints a string followed by a new line
* @str: is the pointer variable used in the function
* Return: 0
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		str++;
	}
	putchar('\n');

	return (0);
}
