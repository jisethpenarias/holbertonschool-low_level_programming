#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the beginning of a linked list.
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

    auxNode = *head;
	if (*head != NULL)
	{
		while (auxNode->next != NULL)
        {
			auxNode = auxNode->next;
            auxNode = auxNode->prev;
        }
		auxNode->next = newNodeEnd;
	}
    else
    {
        newNodeEnd->prev = NULL;
        *head = newNodeEnd;
        return (newNodeEnd);
    }
    newNodeEnd->n = n;
    newNodeEnd->prev = auxNode->next;
    newNodeEnd->next = NULL;
    return (newNodeEnd);
}
