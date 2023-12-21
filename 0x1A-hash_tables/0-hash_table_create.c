#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table of siz size
 * @size: the size of hash table (number of items)
 * Return: a pointer to the hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_table_t *));
	if(ht->array == NULL)
	{
		free(ht);
		return(NULL);
	}

	ht->size = size;
	return (ht);
}
