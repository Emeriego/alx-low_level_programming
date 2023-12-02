#include "./hash_tables.h"

/**
 * hash_table_print - Func Prints hash table.
 * @ht: pter to hash table to be printed.
 *
 * Description: Key/value pairs are printed in the order.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx;
	unsigned char f = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			if (f == 1)
			{
				printf(", ");
			}
			node = ht->array[idx];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			f = 1;
		}
	}
	printf("}\n");
}
