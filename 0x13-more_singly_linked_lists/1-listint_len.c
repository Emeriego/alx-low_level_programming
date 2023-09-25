#include "lists.h"
/**
 * listint_len - prints singly lists.
 * @h: first parameter.
 * Return: returns the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
