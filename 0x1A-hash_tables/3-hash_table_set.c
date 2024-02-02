#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table to be updated
 * @key: Key which cannot be an empty string
 * @value: Value associated with key, must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	/* Checking if index is alredy occupied */
	if (ht->array[index] != NULL)
	{
		current_node = ht->array[index];
		/* Transversing linked list to check for exiting key */
		while (current_node != NULL)
		{
			if (strcmp(current_node->key, key) == 0)
			{
				/* Update value in key if key already exist */
				free(current_node->value);
				current_node->value = strdup(value);
				return (1);
			}
			current_node = current_node->next;
		}
	}

	/* Allocating memory for the new node  */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	/* Setting key and value for new node*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* Adding the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
