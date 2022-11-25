#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: is pointer to function to be serched
* @size: is the the number of elements contained in array
* @cmp: pointer to function that defines how the search is done
* Return: on success index of searched element on success and -1 on failure
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int b;
	int result;

	if (size <=0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		b = array[i];
		result = (*cmp)(b);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
