#include "lists.h"
#include <stdlib.h>

/**
 * free_list - clear a linked list in memory
 * @head: list_t to free
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
