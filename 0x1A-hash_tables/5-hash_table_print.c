#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Write a function that prints a hash table
 * @ht: Hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int printed;

	printed = 0;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		hash_node_t *node = ht->array[index];

		while (node != NULL)
		{
			if (printed)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
