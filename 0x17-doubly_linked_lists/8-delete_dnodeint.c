#include "lists.h"

/**
 *delete_dnodeint_at_index - returns the nth node of a linked list.
 *@head: head address.
 *@index: i index of the node that should be deleted.
 * Return: int 1 or -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxNode;
	unsigned int count = 0;

	auxNode = (*head);

	if (*head && index == 0)
	{
		*head = auxNode->next;
		free(auxNode);
		return (1);
	}

	while (auxNode)
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
