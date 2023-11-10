#include "lists.h"
/**
 * free_dlistint - func frees list
 * @head: start of list
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head)
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
