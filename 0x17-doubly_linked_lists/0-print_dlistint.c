#include "lists.h"

/**
 * print_dlistint - func writes the elements of a d-list
 * @hd: start of list
 * Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *hd)
{
	int c = 0;

	if (hd == NULL)
		return (c);

	while (hd->prev != NULL)
	{
		hd = hd->prev;
	}
	while (hd != NULL)
	{
		printf("%d\n", hd->n);
		c++;
		hd = hd->next;
	}

	return (c);
}
