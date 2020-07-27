#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - adds a new node at the beginning of a linked list.
 *@head: head address.
 *@str: string value to add in node.
 * Return: address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNodelast;
	int lenStr;
	char *copyStr;
	list_t *auxNode;

	if (head == NULL)
		return (NULL);

	copyStr = strdup(str);
	auxNode = malloc(sizeof(list_t));
	newNodelast = malloc(sizeof(list_t));
	if (newNodelast == NULL || copyStr == NULL || auxNode == NULL)
	{
		free(newNodelast);
		free(copyStr);
		free(auxNode);
		return (NULL);
	}

	for (lenStr = 0; copyStr[lenStr]; lenStr++)
	{
	}

	auxNode = *head;

	if (*head != NULL)
	{
		while (auxNode->next != NULL)
			auxNode = auxNode->next;
		auxNode->next = newNodelast;
	}
	else
	{
		*head = newNodelast;
	}
	newNodelast->str = copyStr;
	newNodelast->len = lenStr;
	newNodelast->next = NULL;
	return (newNodelast);
}
