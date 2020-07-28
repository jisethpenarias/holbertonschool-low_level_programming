#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - returns the nth node of a linked list.
 *@head: head address.
 * Return: the node´s head ntn.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count;

    if (head == NULL)
        return NULL;

    count = 0;
    while (count != index)
    {
       head = head->next;
       count++;
    }
    return (head);
}
