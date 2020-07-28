#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - adds a new node at the beginning of a linked list.
 *@head: head address.
 *@n: int value to add in node.
 * Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNodeEnd;
	listint_t *auxNode;

	newNodeEnd = malloc(sizeof(listint_t));
	auxNode = malloc(sizeof(listint_t));
	if (newNodeEnd == NULL || auxNode == NULL)
	{
		free(newNodeEnd);
		free(auxNode);
		return (NULL);
	}

	auxNode = *head;
	if (*head != NULL)
	{
		while (auxNode->next != NULL)
			auxNode = auxNode->next;
		auxNode->next = newNodeEnd;
	}
	else
	{
		*head = newNodeEnd;
	}
	newNodeEnd->n = n;
	newNodeEnd->next = NULL;
	return (newNodeEnd);
}
