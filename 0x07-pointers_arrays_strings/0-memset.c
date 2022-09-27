#include "main.h"

/**
* *_memset - fills the first n bytes of the memory area pointed to by s
* with the constant byte b
* @s: is a pointer
* @b: is the value
* @n: is the number of times
* Return: 0 on success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
	{
		s[a] = b;
	}
	return (0);
}
