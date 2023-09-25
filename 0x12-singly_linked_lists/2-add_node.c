#include "lists.h"
#include <stdio.h>
/**
 * add_node - adds node at the start of singly  linked  lists.
 * @head: first parameter.
 * @str: second parameter.
 * Return: returns the address of the added node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_0;

	node_0 = malloc(sizeof(list_t));
	if (!node_0 || !str)
		return (NULL);

	node_0->str = strdup(str);
	node_0->len = strlen(str);
	node_0->next = *head;
	*head = node_0;
	if (!node_0->str)
	{
		free(node_0);
		return (NULL);
	}
	return (node_0);
}
