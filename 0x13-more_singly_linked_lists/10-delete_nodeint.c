#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index.
 * @head: head of a list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *prev;
	listint_t *next;

	if (index != 0)
        prev = get_nodeint_at_index(*head, index);

	if (prev == NULL || (prev->next == NULL && index != 0))
        return (-1);

	next = prev->next;
	if (index == 0)
	{
        free(prev);
		*head = next;
	}
	else
	{
		prev->next = next->next;
		free(next);
	}
	return (1);
}