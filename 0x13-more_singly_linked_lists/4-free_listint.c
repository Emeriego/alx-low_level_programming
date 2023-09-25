#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees the singly  linked  lists.
 * @head: first parameter.
 */
void free_listint(listint_t *head)
{
	listint_t *my_head = head;
	listint_t *next;

	while (my_head)
	{
		next = my_head->next;
		//free(my_head->n);
		free(my_head);
		my_head = next;
	}
}
