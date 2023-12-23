#include "hash_tables.h"

/**
 * shash_table_create - create a shash table
 * @size: size of element is the table
 * Return: pointer to hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table));
	if (ht == NULL)
		return (NULL);

	h->array = calloc(size, sizeof(shash_node *));
	if (ht->array == NULL)
		return (NULL);

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 *
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tnode;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (0);

	node = malloc(sizeof(shash_node));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
		return (0);

	node->value = strdup(value);
	if (node->value == NULL)
		return (0);

	idx = key_index(key, ht->size);

	if (ht->array[idx] != NULL)
	{
		node->next = ht->array[idx];
	}
	ht->array[idx] = node;


}

/**
 *
 */
void add_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *pnode;

	
}
