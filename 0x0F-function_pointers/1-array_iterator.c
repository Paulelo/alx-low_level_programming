#include "function_pointers.h"

/**
* array_iterator - is runction that perform action on every element of an arr
* @array: is pointer to array on which action is to be performed
* @size: is size of the array
* @action: is pointer to function which performs action on arr elements
* Return: noting on success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i, b;

	if (*array == NULL)
		exit (0);
	for(i = 0; i < size; i++)
	{
		b = array[i];
		(*action)(b);
	}
}
