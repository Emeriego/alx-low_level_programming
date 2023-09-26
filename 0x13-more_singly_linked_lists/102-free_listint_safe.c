#include "lists.h"
/**
 * free_listint_safe - frees up a linked list safely.
 * @h: head of the singly linked list.
 *
 * Return: returns the size of the freed list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	list_ptr *lpt, *new_n, *add_n;
	listint_t *curr_n;

	lpt = NULL;
	while (*h)
	{
		new_n = malloc(sizeof(list_ptr));

		if (new_n == NULL)
			exit(98);

		new_n->p = (void *)*h;
		new_n->next = lpt;
		lpt = new_n;
		add_n = lpt;
		while (add_n->next)
		{
			add_n = add_n->next;
			if (*h == add_n->p)
			{
				*h = NULL;
				del_list(&lpt);
				return (n);
			}
		}
		curr_n = *h;
		*h = (*h)->next;
		free(curr_n);
		n++;
	}
	*h = NULL;
	del_list(&lpt);
	return (n);
}