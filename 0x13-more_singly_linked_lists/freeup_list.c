#include "lists.h"
/**
 * del_list - frees a linked list
 * @head: head of the list.
 *
 */
void del_list(list_ptr **head)
{
	list_ptr *tmp_list;
	list_ptr *curr_list;

	if (head != NULL)
	{
		curr_list = *head;
		while ((tmp_list = curr_list) != NULL)
		{
			curr_list = curr_list->next;
			free(tmp_list);
		}
		*head = NULL;
	}
}