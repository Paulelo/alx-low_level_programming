#include "hash_tables.h"

/**
 * key_index - Gives the index of key passed to function
 * @key: key whose index is to be returned
 * @size: Size of the array of hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int c;

	c = hash_djb2((unsigned char *)key);
	return (c % size);
}
