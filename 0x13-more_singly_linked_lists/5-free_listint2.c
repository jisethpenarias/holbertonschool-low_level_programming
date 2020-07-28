#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - clear a linked list in memory
 * @head: listint_t to free
 */

void free_listint2(listint_t **head)
{
	listint_t *auxNode;

	auxNode = *head;

	while (auxNode)
	{
		*head = auxNode->next;
		free(auxNode);
		auxNode = *head;
	}
}
