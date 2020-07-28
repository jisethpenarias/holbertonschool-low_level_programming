#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list.
 *@head: head address.
 * Return: he head node’s data n.
 */
int pop_listint(listint_t **head)
{
	listint_t *auxNodeHead;
	int valueN;

	if (head == NULL)
		return (0);

	valueN = (*head)->n;
	auxNodeHead = (*head)->next;

	free(*head);
	*head = auxNodeHead;

	return (valueN);
}
