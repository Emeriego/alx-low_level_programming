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
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	if (!new_head->str)
	{
		free(new_head);
		return (NULL);
	}
	return (new_head);
}
