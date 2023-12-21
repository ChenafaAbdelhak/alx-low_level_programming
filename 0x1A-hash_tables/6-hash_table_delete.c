#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *prev = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			prev = node;
			node = node->next;
			free(prev->value);
			free(prev->key);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
