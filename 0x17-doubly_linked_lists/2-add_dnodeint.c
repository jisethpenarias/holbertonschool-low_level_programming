#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a linked list.
 *@head: head address.
 *@n: int value to add in node.
 * Return: address of the new element or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		/*in cese of failure free the memory of the newNode*/
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (NULL);
	}
	(*head)->prev = newNode;
	newNode->next = *head;

	/*change the pointer head whit the new real head on the linked list*/
	*head = newNode;
	return (newNode);
}
