#include "main.h"

/**
 * print_alphabet- prints all letters of the alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		_putchar(let);
	}
	_putchar('\n');

	return (0);
}
