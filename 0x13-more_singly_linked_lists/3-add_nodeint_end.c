#include "lists.h"
#include <stdio.h>
/**
 * traverse_to_end_of - moves to end of link, returns the addres.
 * @head: linked list to be traversed.
 * Return: returns pointer to lastnode.
 */
listint_t *traverse_to_end_of(listint_t *head)
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
 * add_nodeint_end - adds node at the end of singly  linked  lists.
 * @head: first parameter.
 * @n: second parameter.
 * Return: returns the address of the added node.
 */
listint_t *add_node_end(listint_t **head, const int n)
{
	listint_t *node_last;

	node_last = malloc(sizeof(listint_t));
	if (!node_last)
		return (NULL);

	node_last->n = n;
	node_last->next = NULL;
	if (!node_last->n)
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
