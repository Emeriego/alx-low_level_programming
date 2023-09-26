#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - pops the singly  linked  lists.
 * @head: first parameter.
 * @index: index being looked for.
 * Return: returns address of node.
 */
listint_t *get_nodeint_b4_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_head = head;
	size_t n;

	if (tmp_head == NULL)
		return (NULL);
	for (n = 0; n < index - 1; n++)
	{
		if (tmp_head == NULL)
		{
			return (NULL);
		}
		tmp_head = tmp_head->next;
	}
	return (tmp_head);
}
