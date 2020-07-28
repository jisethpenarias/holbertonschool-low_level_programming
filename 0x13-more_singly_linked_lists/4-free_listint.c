#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - clear a linked list in memory
 * @head: listint_t to free
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
