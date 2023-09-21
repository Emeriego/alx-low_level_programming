#include "lists.h"
#include <stdio.h>
/**
 * traverse_to_end_of - moves to end of link.
 * @head: linked list to be traversed.
 * Return: returns pointer to lastnode.
 */
list_t *traverse_to_end_of(list_t *head)
{
	if (!head)
		return (NULL);
	while (head->next != NULL)
	{
		head = head->next;
	}
	return (head);
}
/**
 * add_node_end - adds node at the end of singly  linked  lists.
 * @head: first parameter.
 * @str: second parameter.
 * Return: returns the address of the added node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_last;

	node_last = malloc(sizeof(list_t));
	if (!node_last || !str)
		return (NULL);

	node_last->str = strdup(str);
	node_last->len = strlen(str);
	node_last->next = NULL;
	if (!node_last->str)
	{
		free(node_last);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = node_last;
	}
	else
	{
		traverse_to_end_of(*head)->next = node_last;
	}
	return (node_last);
}
