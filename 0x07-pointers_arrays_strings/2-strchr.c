#include "main.h"

/**
* *_strchr - checks for specific char in a string
* @s: string to check from
* @c: character to check for
* Return: pointer to c on success or elses null
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
