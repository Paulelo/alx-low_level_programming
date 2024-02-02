#include "hash_tables.h"
#include "stddef.h"
#include <stdlib.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash  table to look into
 * @key: The key to look for
 *
 * Return: Value associted with key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];
	if (current_node != NULL && current_node->key != NULL)
	{
		return (current_node->value);
	}

	return (NULL);
}
