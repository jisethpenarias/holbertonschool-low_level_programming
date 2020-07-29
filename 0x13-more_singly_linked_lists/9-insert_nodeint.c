#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: head address.
 *@idx: position of the node.
 *@n: int n.
 * Return: address of the new node idx.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNodeIdx;
	listint_t *auxNode;
	listint_t *auxNodeProx;
	unsigned int count = 0;

	newNodeIdx = malloc(sizeof(listint_t));
	if (newNodeIdx == NULL)
		return (NULL);
	newNodeIdx->n = n;

	auxNode = *head;
	if (idx == 0)
	{
		newNodeIdx->next = auxNode;
		*head = newNodeIdx;
		return (newNodeIdx);
	}
	if (idx == 1)
	{
		auxNodeProx = auxNode->next;
		auxNode->next = newNodeIdx;
		newNodeIdx->next = auxNodeProx;
		return (newNodeIdx);
	}
	while (count != idx - 1 && auxNode != NULL)
	{
		auxNode = auxNode->next;
		auxNodeProx = auxNode->next;
		count++;
	}
	if (auxNode == NULL)
		return (NULL);

	auxNode->next = newNodeIdx;
	newNodeIdx->next = auxNodeProx;

	return (newNodeIdx);
}
