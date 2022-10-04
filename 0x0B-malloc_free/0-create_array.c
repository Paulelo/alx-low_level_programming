#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and
* initialize it with a specific char
* @size: is the variable for the size in bytes of array
* @c: is array variable
* Return: pointer to array on success
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return ('\0');
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[size] = '\0';
	return (str);
}
