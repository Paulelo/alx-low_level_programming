#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array
* @min: is start point for elements to be included in array
* @max: is end point of array element
* Return: on success pointer to array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
