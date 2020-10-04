#include "hash_tables.h"

/**
 * hash_table_print -   prints a hash table.
 * @ht: is the hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ht_tmp;
	char *str = "";

	if (!ht)
		return;

	printf("{"); /* key start printing */
	/* iterate as long as i is less than the size of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		ht_tmp = ht->array[i];
		/*ht->array[i]: each position in the hash table array*/
		while (ht_tmp)
		{
			printf("%s'%s': '%s'", str, ht_tmp->key, ht_tmp->value);
			str = ", ";
			/*str "," is necessary to separate in the print the key: value*/
			ht_tmp = ht_tmp->next;
		}
	}
	printf("}\n"); /* key end printing */
}
