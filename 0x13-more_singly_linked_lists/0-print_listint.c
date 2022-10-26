#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* print_listint - prints data in linked list
* @h: is pointer to the first node
* Return: number of node on success
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i, node_count = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}

