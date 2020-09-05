#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a linked list.
 *@head: head address.
 *@index: index of the node.
 * Return: the node´s head ntn.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	count = 0;
	while (count != index && head != NULL)
	{
		head = head->next;
		count++;
	}
	if (count < index)
		return (NULL);
	return (head);
}
