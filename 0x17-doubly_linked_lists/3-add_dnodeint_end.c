#include "lists.h"
/**
 * add_dnodeint_end - func adds fresh node at end of node
 * @head: start of list
 * @num: value to be added
 * Return: returns address of frsh node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int num)
{
	dlistint_t *h;
	dlistint_t *frsh = malloc(sizeof(dlistint_t));

	if (frsh == NULL)
		return (NULL);
    frsh->next = NULL;
	frsh->n = num;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
        {
			h = h->next;
        }
		h->next = frsh;
	}
	else
	{
		*head = frsh;
	}
	frsh->prev = h;
	return (frsh);
}
