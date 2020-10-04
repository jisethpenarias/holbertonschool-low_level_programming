#include "hash_tables.h"

/**
 * hash_table_delete -   deletes a hash table.
 * @ht: is the hash table.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ht_tmp, *hnode;
	unsigned long int i;

	/* iterate as long as i is less than the size of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		ht_tmp = ht->array[i];
		/*ht->array[i]: each position in the hash table array*/
		while (ht_tmp) /*ht->array[i] != NULL*/
		{
			hnode = ht_tmp->next; /*ht->array[i]->next(node)*/
			free(ht_tmp->key);	  /*free ht->array[i]->key(node)*/
			free(ht_tmp->value);  /*free ht->array[i]->value(node)*/
			free(ht_tmp);		  /* free ht->array[i]*/
			ht_tmp = hnode;
		}
	}
	free(ht->array);
	free(ht);
}
