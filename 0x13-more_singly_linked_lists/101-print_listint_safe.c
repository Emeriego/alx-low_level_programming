#include "lists.h"
/**
 * print_listint_safe - prints a linked list.
 * @head: head of the list.
 *
 * Return: returns number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	list_ptr *lpt, *new_n, *add_n;

	lpt = NULL;
	while (head)
	{
		new_n = malloc(sizeof(list_ptr));
		if (!new_n)
        {
			exit(98);
        }
		new_n->p = (void *)head;
		new_n->next = lpt;
		lpt = new_n;
		add_n = lpt;

		while (add_n->next)
		{
			add_n = add_n->next;
			if (head == add_n->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&lpt);
				return (n);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	del_list(&lpt);
	return (n);
}