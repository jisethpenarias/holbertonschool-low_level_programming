#include "lists.h"

/**
 * free_dlistint - clear a linked list in memory
 * @head: listint_t to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
