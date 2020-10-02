#include "hash_tables.h"

/**
 * add_node - adds a new node at the beginning of a linked list.
 *@head: head address.
 *@key: string value to add in node.
 *@value: string value to add in node.
 * Return: address of the new element.
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newNode, **tmp;
	char *copyKey, *copyValue;

	copyKey = strdup(key), copyValue = strdup(value);

	newNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newNode == NULL || copyKey == NULL || copyValue == NULL)
	{
		free(newNode);
		free(copyKey);
		free(copyValue);
		return (NULL);
	}
	tmp = head;
	while (tmp != NULL)
	{
		if (strcmp((*tmp)->key, key) == 0)
		{
			free((*tmp)->value);
			(*tmp)->value = strdup(value);
			if ((*tmp)->value == NULL)
				return (NULL);
			return (*tmp);
		}
		(*tmp) = (*tmp)->next;
	}

	/*with strdup I double the string it receives as an argument*/
	newNode->key = copyKey;
	newNode->value = copyValue;
	if (newNode->value == NULL)
		return (NULL);
	newNode->next = *head;
	/*change the pointer head whit the new real head on the linked list*/
	*head = newNode;
	return (newNode);
}

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: is the hash table.
 * @key: is the key.
 * @value: is the value.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *aux_node;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* index: place where the new node is indexed in the hash table*/

	aux_node = add_node(&(ht->array[index]), key, value);
	if (aux_node == NULL)
		return (0);

	ht->array[index] = aux_node;
	return (1);
}
