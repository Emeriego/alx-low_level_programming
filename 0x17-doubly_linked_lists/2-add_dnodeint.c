#include "lists.h"

/**
 * add_dnodeint - func add frsh node at start
 * @head: start of list
 * @n: value of the element
 * Return: the address of the frsh element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *frsh = malloc(sizeof(dlistint_t));

	if (frsh == NULL)
		return (NULL);
	frsh->prev = NULL;
	frsh->n = n;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	frsh->next = h;
	if (h != NULL)
	{
		h->prev = frsh;
	}
	*head = frsh;
	return (frsh);
}
