#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* listint_len - returns number of elements in a list
* @h: is pointer to the first node
* Return: number of node_count on success
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i, node_count = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}

