#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list.
 *@head: head address.
 *@str: string value to add in node.
 * Return: address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int lenStr;
	char *copyStr;

	copyStr = strdup(str);
	/*space for the new node*/
	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		/*in cese of failure free the memory of the newNode*/
		free(newNode);
		/*in cese of failure free the memory of the copyStr*/
		free(copyStr);
		return (NULL);
	}

	/*with strdup I double the string it receives as an argument*/
	newNode->str = copyStr;
	for (lenStr = 0; copyStr[lenStr];lenStr++)
	{	
	}
	newNode->len = lenStr;
	/*pointer to the next value in the linked list*/
	/*next takes the value of the pointer to the next*/
	/*structure in the likend list*/
	newNode->next = *head;
	/*change the pointer head whit the new real head on the linked list*/
	*head = newNode;

	return (newNode);
}
