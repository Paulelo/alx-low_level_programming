#include "main.h"

/**
* _strlen_recursion - prints length of string
* @s: sting whose length is to be printed
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
