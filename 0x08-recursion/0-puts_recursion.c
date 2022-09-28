#include "main.h"

/**
* _puts_recursion - prints a string with new line using recursion
* @s: is pointer to string
* Return: nothing
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[0]);
	_puts_recursion(s + 1);
}
