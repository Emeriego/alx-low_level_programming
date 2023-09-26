#include "lists.h"
/**
 * reverse_listint - reverses a list.
 * @head: head of list.
 *
 * Return: pointer to the node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev_n;
	listint_t *next_n;

	rev_n = NULL;
	next_n = NULL;
	while (*head)
	{
		next_n = (*head)->next;
		(*head)->next = rev_n;
		rev_n = *head;
		*head = next_n;
	}
	*head = rev_n;
	return (*head);
}

