#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 *@head: head address.
 *@h: int value to add in node.
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

		newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		/*in cese of failure free the memory of the newNode*/
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	/*change the pointer head whit the new real head on the linked list*/
	*head = newNode;
	return (newNode);
}
