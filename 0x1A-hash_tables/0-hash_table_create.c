#include "hash_tables.h"

/**
 * hash_table_create - function to Create a hash table.
 * @size: The size of the array.
 *
 * Return: Returns a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int idx = 0;

	hasht = malloc(sizeof(hash_table_t));
	if (!hasht)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
		return (NULL);
	while (idx < size)
	{
		hasht->array[idx] = NULL;
		idx++;
	}
	return (hasht);
}
