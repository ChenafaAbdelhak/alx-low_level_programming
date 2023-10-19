#include "lists.h"

/**
 * list_len - calculate lenth of a list
 * @h: the list
 * Return: lenth
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
