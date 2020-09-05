#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a doublelinked list.
 *@head: head address.
 *@n: int value to add in node.
 * Return: address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNodeEnd;
	dlistint_t *auxNode;

	newNodeEnd = malloc(sizeof(dlistint_t));
	auxNode = malloc(sizeof(dlistint_t));
	if (newNodeEnd == NULL || auxNode == NULL)
	{
		free(newNodeEnd);
		free(auxNode);
		return (NULL);
	}

	newNodeEnd->n = n;
	newNodeEnd->next = NULL;

	if (*head == NULL)
	{
		newNodeEnd->prev = NULL;
		*head = newNodeEnd;
		return (newNodeEnd);
	}
	auxNode = *head;
	while (auxNode->next != NULL)
	{
		auxNode = auxNode->next;
	}
	auxNode->next = newNodeEnd;
	newNodeEnd->prev = auxNode->next;
	return (newNodeEnd);
}
