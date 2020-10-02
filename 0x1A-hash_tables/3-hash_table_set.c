#include "hash_tables.h"

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
	hash_node_t *newNode, *tmp;
	char *copyKey, *copyValue;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* index: place where the new node is indexed in the hash table*/
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	copyKey = strdup(key), copyValue = strdup(value);
	/*space for the new node*/
	newNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newNode == NULL || copyKey == NULL || copyValue == NULL)
		return (0);
	/*with strdup I double the string it receives as an argument*/
	newNode->key = copyKey;
	if (newNode->key == NULL)
		return (0);
	newNode->value = copyValue;
	if (newNode->value == NULL)
		return (0);
	newNode->next = ht->array[index];
	/*change the pointer head whit the new real head on the linked list*/
	ht->array[index] = newNode;
	return (1);
}
