#include "lists.h"
/**
 * get_dnodeint_at_index - func gets nth node
 * @head: start of list
 * @index: index of nth node
 * Return: returns nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (!head)
	{
		return (NULL);
	}
	while (head->prev)
	{
		head = head->prev;
	}
	idx = 0;
	while (head != NULL)
	{
		if (idx == index)
			break;
		head = head->next;
		idx++;
	}
	return (head);
}
