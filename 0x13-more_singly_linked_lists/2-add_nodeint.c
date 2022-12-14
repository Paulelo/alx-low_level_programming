#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - add node at beginning of list
* @head: is pointer to head node
* @n: data in new node
* Return: address of new element on succecc of NULL on failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
