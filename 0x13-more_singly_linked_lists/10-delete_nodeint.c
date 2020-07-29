#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - returns the nth node of a linked list.
 *@head: head address.
 *@index: i index of the node that should be deleted.
 * Return: int 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *auxNode;
	unsigned int count = 0;

	while (*head)
	{
		if (count == index)
		{
			auxNode = (*head);
			(*head) = (*head)->next;
			free(auxNode);
			return (1);
		}
		head = &(*head)->next;
		count++;
	}
	return (-1);
}
