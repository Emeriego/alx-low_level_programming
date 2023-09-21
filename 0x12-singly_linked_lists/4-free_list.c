#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees the singly  linked  lists.
 * @head: first parameter.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (!head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
