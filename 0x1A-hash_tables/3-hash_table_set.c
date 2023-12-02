#include "hash_tables.h"
/**
 * hash_table_set - function updates an element in hash table.
 * @ht: ptr to hash table.
 * @key: The key.
 * @value: Value associated with key.
 *
 * Return: returns 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	hash_node_t *new_node;
	char *dup_val;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	dup_val = strdup(value);
	if (dup_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	i = idx;
	while (ht->array[i] != NULL)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_val;
			return (1);
		}
		i++;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(dup_val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = dup_val;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
