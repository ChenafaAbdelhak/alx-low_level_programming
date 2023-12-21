#include "hash_tables.h"

/**
 * key_index - generates an index from a key
 * @key: the string
 * @size: size of the hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
