#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _calloc - allocates space in memory for n member of an array
* @nmemb: number of elements in array
* @size: size of in bytes
* Return: on success pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}

