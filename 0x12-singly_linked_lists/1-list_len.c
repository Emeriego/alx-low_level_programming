#include "lists.h"
/**
 * list_len - prints singly lists.
 * @h: first parameter.
 * Return: returns the number of nodes.
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
