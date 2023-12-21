#include "hash_tables.h"

/**
 * hash_table_get - get the value stored in ht using key
 * @ht: hash table
 * @key: the key ,string
 * Return: value, string
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	node = ht->array[key_index((unsigned const char *) key, ht->size)];
	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
