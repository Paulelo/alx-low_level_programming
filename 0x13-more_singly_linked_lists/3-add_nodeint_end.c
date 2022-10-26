#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - add new node at end of list
* @head: is pointer to head pointer
* @n: is element of list
* Return: pointer to address of new node on success or NULL on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *new_node;
	struct listint_s *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	last = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (*head);
}

