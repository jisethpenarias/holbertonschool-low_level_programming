#include "lists.h"

/**
 *sum_dlistint - sum of all the data (n) of a linked list.
 *@head: head address.
 * Return: return the sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
