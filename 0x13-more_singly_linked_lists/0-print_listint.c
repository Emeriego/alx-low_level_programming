#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints singly lists.
 * @h: first parameter.
 * Return: returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
