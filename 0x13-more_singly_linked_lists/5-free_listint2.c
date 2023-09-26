#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees the singly  linked  lists.
 * @head: first parameter.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	listint_t *my_head = *head;
	listint_t *next;

	while (my_head)
	{
		next = my_head->next;
		free(my_head);
		my_head = next;
	}
	my_head = NULL;
}
