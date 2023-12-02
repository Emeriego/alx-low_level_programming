#include "hash_tables.h"

/**
 * key_index - function to Get the index at which a key/value pair is stored.
 * @key: The key.
 * @size: The size of array.
 *
 * Return: returns the index of the key using djb2 algo.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
