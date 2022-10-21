#include "lists.h"
#include <stdio.h>

/**
* list_len - prints all elements of a list_t
* @h: is pointer list
* Return: on success number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}

