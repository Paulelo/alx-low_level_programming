#include "main.h"

/**
* *_memcpy - copies str from src to dest
* @dest: destination to copy to
* @src: source of string to be copied
* @n: number of bytes to be copied
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
