#include "hash_tables.h"

/**
 * shash_table_create - create a shash table
 * @size: size of element is the table
 * Return: pointer to hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = size;

	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index;
	shash_node_t *new_node = NULL, *temp_node = NULL, *prev = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	hash_index = key_index((const unsigned char *) key, ht->size);
	temp_node = ht->array[hash_index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			if (!temp_node->value)
				return (0);
			return (1);
		}

		prev = temp_node;
		temp_node = temp_node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key), free(new_node->value), free(new_node);
		return (0);
	}

	new_node->next = ht->array[hash_index];
	ht->array[hash_index] = new_node;
	if (prev != NULL)
		prev->snext = new_node;
	else
		ht->shead = new_node;
	new_node->sprev = prev;
	new_node->snext = NULL;
	if (new_node->sprev != NULL)
		new_node->sprev->snext = new_node;
	else
		ht->shead = new_node;
	if (new_node->snext != NULL)
		new_node->snext->sprev = new_node;
	else
		ht->stail = new_node;

	return (1);
}

/**
 * shash_table_get - get the value stored in ht using key
 * @ht: hash table
 * @key: the key ,string
 * Return: value, string
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t * node;

	if (ht == NULL || key == NULL)
		return (NULL);

	node = ht->array[key_index((unsigned
		const char *) key, ht->size)];
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

/**
 * shash_table_print_rev - print all elements in reverse
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	int first = 0;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;

	node = ht->stail;

	printf("{");
	while (node != NULL)
	{
		if (first == 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		first = 0;
	}
	printf("}\n");
}

/**
 * shash_table_print - prints all  elements of a hash table
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	int first = 1;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;

	node = ht->shead;

	printf("{");
	while (node != NULL)
	{
		if (first == 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->snext;
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 * Return: nothing.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp_node = node;
			node = node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
		}
	}

	free(ht->array);
	free(ht);
}
