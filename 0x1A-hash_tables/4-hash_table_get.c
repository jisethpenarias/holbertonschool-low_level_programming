#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: is the hash table.
 * @key: is the key.
 * Return: the value associated with the element, or NULL
 * if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hnode;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	hnode = ht->array[index];
	while (hnode != NULL)
	{
		if (strcmp(hnode->key, key) == 0)
			return (hnode->value);
		hnode = hnode->next;
	}
	return (NULL);
}
