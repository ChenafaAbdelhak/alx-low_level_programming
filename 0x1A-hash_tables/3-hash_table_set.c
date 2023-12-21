#include "hash_tables.h"

/**
 * hash_table_set - adds elements to a hash table
 * @ht: a pointer to hash table
 * @key: the key
 * @value: the value
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((unsigned const char *) key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t *));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key), free(node);
		return (0);
	}
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
