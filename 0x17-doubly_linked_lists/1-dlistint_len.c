#include "lists.h"
/**
 * dlistint_len - func gets the number of elements in list
 * @hd: start of list
 * Return: returns number of nodes
 */
size_t dlistint_len(const dlistint_t *hd)
{
	int idx = 0;

	if (hd == NULL)
		return (idx);

	while (hd->prev != NULL)
    {
        hd = hd->prev;
    }
	while (hd != NULL)
	{
		idx++;
		hd = hd->next;
	}

	return (idx);
}
