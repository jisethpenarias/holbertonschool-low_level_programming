#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - returns the nth node of a linked list.
 *@head: head address.
 *@index: index of the node.
 * Return: the node´s head ntn.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
