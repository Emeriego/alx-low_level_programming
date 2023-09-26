#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: returns the address of the node where the loop started.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *headx2;
	listint_t *pre_node;

	headx2 = head;
	pre_node = head;
	while (head && headx2 && headx2->next)
	{
		head = head->next;
		headx2 = headx2->next->next;
		if (head == headx2)
		{
			head = pre_node;
			pre_node =  headx2;
			while (100)
			{
				headx2 = pre_node;
				while (headx2->next != head && headx2->next != pre_node)
                    headx2 = headx2->next;
				if (headx2->next == head)
                    break;
				head = head->next;
			}
			return (headx2->next);
		}
	}
	return (NULL);
}