#include "hash_tables.h"

/**
 * hash_table_print - prints all  elements of a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (node != NULL)
		{
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			first = 0;
		}
		node = ht->array[i];
	}
	printf("}\n");
}
