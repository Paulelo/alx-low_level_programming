#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - function that returns the length of a string.
* @s: is a pointer variable
* Return: count
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
