#include "lists.h"
/**
 * sum_listint - sums up singly lists.
 * @head: first parameter.
 * Return: returns the number of nodes.
 */
int sum_listint(listint_t *head)
{
	const listint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
