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

	if (*head == NULL)
		return (-1);

	auxNode = *head;

	while (count < index)
	{
		if (auxNode->next != NULL)
		{
			auxNode = auxNode->next;
			count++;
		}
		else
			return (-1);
	}
	if (auxNode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = auxNode->next;
		if (auxNode->next)
			auxNode->next->prev = NULL;
		free(auxNode);
		return (1);
	}
	auxNode->prev->next = auxNode->next;
	if (auxNode->next != NULL)
		auxNode->next->prev = auxNode->prev;
	free(auxNode);
return (1);
}
