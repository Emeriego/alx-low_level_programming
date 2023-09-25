#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a node at the n idx the singly  linked  lists.
 * @head: first parameter.
 * @index: index being looked for.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *tmp_head = head;
    int n;

    if(tmp_head == NULL)
        return (NULL);
    
    for (n = 0; n < index; n++)
    {
        if (tmp_head == NULL)
        {
            return (NULL);
        }
        tmp_head = tmp_head->next;
    }
    return (tmp_head);
}