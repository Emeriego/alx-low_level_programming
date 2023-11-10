#include "lists.h"
/**
 * delete_dnodeint_at_index - func deletes node at index of d-list
 * @head: start of list
 * @index: index of new node
 * Return: returns 1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *myhd1;
	dlistint_t *myhd2;
	unsigned int c;

	myhd1 = *head;
	if (myhd1 != NULL)
    {
        while (myhd1->prev != NULL)
        {
            myhd1 = myhd1->prev;
        }
    }
	c = 0;
	while (myhd1 != NULL)
	{
		if (c == index)
		{
			if (c == 0)
			{
				*head = myhd1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				myhd2->next = myhd1->next;
				if (myhd1->next != NULL)
                {
					myhd1->next->prev = myhd2;
                }
			}
			free(myhd1);
			return (1);
		}
		myhd2 = myhd1;
		myhd1 = myhd1->next;
		c++;
	}
	return (-1);
}
