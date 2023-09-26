#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @head: head of a list.
 * @idx: index of the list where the new node is.
 * @n: integer element.
 *
 * Return: returns the address of the new node, or NULL if it
 * fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *node_at_idx;
	listint_t *new_node;

	if (idx != 0)
		node_at_idx = get_nodeint_at_index(*head, idx - 1);

	if (node_at_idx == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = node_at_idx->next;
		node_at_idx->next = new_node;
	}
	return (new_node);
}
