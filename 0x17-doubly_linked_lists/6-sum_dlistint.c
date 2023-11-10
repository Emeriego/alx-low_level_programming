#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data n in d-list
 * @head: start of list
 * Return: returns sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
        {
			head = head->prev;
        }
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
