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
	hash_node_t *newNode;
	char *copyKey;
	char *copyValue;

	copyKey = strdup(key);
	copyValue = strdup(value);
	/*space for the new node*/
	newNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newNode == NULL || copyKey == NULL || copyValue == NULL)
	{
		/*in cese of failure free the memory of the newNode*/
		free(newNode);
		/*in cese of failure free the memory of the copyStr*/
		free(copyKey);
		free(copyValue);
		return (0);
	}

	/*with strdup I double the string it receives as an argument*/
	newNode->key = copyKey;
	newNode->value = copyValue;
	if (newNode->value == NULL)
		return (0);

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

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* index: place where the new node is indexed in the hash table*/

	ht->array[index] = add_node(&(ht->array[index]), key, value);
	return (1);
}
