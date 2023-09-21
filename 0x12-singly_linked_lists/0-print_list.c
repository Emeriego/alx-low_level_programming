#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints singly lists.
 * @h: first parameter.
 * Return: returns the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}
	return (count);
}
