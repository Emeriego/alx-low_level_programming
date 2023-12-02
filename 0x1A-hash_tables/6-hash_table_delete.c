#include "hash_tables.h"

/**
 * hash_table_delete - func Deletes hash table.
 * @ht: Ptr to hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *curr;
	hash_table_t *head = ht;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			node = ht->array[idx];
			while (node != NULL)
			{
				curr = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = curr;
			}
		}
	}
	free(head->array);
	free(head);
}
