#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds node at the start of singly  linked  lists.
 * @head: first parameter.
 * @str: second parameter.
 * Return: returns the address of the added node.
 */
listint_t *add_node(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (!node_new)
		return (NULL);

	node_new->n = n;
	node_new->next = *head;
	*head = node_new;
	if (!node_new->n)
	{
		free(node_new);
		return (NULL);
	}
	return (node_new);
}
