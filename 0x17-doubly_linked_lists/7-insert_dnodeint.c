#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@head: head address.
 *@idx: position of the node.
 *@n: int n.
 * Return: address of the new node idx.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *newNodeIdx;
	dlistint_t *auxNode;
	dlistint_t *auxNodeProx;
	unsigned int count = 0;

	newNodeIdx = malloc(sizeof(dlistint_t));
	if (newNodeIdx == NULL)
		return (NULL);

	newNodeIdx->n = n;
	auxNode = *h;
	if (idx == 0)
	{
		newNodeIdx->next = auxNode;
		*h = newNodeIdx;
        newNodeIdx->prev = NULL;
        auxNode->prev = newNodeIdx;
		return (newNodeIdx);
	}
	if (idx == 1)
	{
		auxNodeProx = auxNode->next;
		auxNode->next = newNodeIdx;
		newNodeIdx->next = auxNodeProx;
		auxNodeProx->prev = newNodeIdx;
        newNodeIdx->prev = auxNode;
		return (newNodeIdx);
	}
    while (count != idx - 1 && auxNode != NULL)
	{
		auxNode = auxNode->next;
		if (auxNode == NULL)
		{
			return (NULL);
		}
		auxNodeProx = auxNode->next;
		count++;
	}
    auxNode->next = newNodeIdx;
	newNodeIdx->next = auxNodeProx;
	newNodeIdx->prev = auxNode;
    auxNodeProx->prev = newNodeIdx;
    return (newNodeIdx);
}
