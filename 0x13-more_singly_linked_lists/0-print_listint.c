#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints singly lists.
 * @h: first parameter.
 * Return: returns the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
