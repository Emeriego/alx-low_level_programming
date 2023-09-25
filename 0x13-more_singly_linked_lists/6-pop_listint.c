#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - pops the singly  linked  lists.
 * @head: first parameter.
 */
int pop_listint(listint_t **head)
{
    listint_t *tmp_head = *head;
	listint_t *next;
    int n;

    if(head == NULL || *head == NULL)
        return (0);
    n = tmp_head->n;
	*head = tmp_head->next;
	free(tmp_head);
    return (n);
}