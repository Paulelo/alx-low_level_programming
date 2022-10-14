#include "main.h"
#include <stddef.h>

/**
* _strspn - gets the length of a prefix substring bytes
* @s: variable to be scaned
* @accept: variable to be scanned for in @s
* Return: pointer to accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}

	}

	return (i);

}
