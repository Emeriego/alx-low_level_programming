#include "hash_tables.h"
void shash_table_delete(shash_table_t *ht);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *curr;
	unsigned long int index;
	char *copy_v;

	if (!ht || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_v = strdup(value);
	if (copy_v == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->shead;
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = copy_v;
			return (1);
		}
		curr = curr->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(copy_v);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(copy_v);
		free(new);
		return (0);
	}
	new->value = copy_v;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		curr = ht->shead;
		while (curr->snext != NULL && strcmp(curr->snext->key, key) < 0)
			curr = curr->snext;
		new->sprev = curr;
		new->snext = curr->snext;
		if (curr->snext == NULL)
			ht->stail = new;
		else
			curr->snext->sprev = new;
		curr->snext = new;
	}

	return (1);
}
/**
 * shash_table_create - func Creates sorted hash table.
 * @size: Size of table.
 *
 * Return: returns a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int idx;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
		ht->array[idx] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_get - func Retrieves value associated with key.
 * @ht: ptr to sorted hash table.
 * @key: key to get the value of.
 *
 * Return: returns the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *curr;
	shash_table_t *head = ht;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		curr = node->snext;
		free(node->value);
		free(node->key);
		free(node);
		node = curr;
	}

	free(head->array);
	free(head);
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

