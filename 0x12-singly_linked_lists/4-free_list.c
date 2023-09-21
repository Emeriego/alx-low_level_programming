#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees the singly  linked  lists.
 * @head: first parameter.
 */
void free_list(list_t *head)
{
	list_t *my_head = head;
	list_t *next;

	while (my_head)
	{
		next = my_head->next;
		free(my_head->str);
		free(my_head);
		my_head = next;
	}
}
