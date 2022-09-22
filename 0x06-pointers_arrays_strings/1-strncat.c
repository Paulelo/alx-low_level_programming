#include "main.h"
#include <string.h>

/**
* *_strncat - is function to concatenate strings
* @dest: first string
* @src: second string
* @n: integer to increment array
* Return: Pointer to resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
