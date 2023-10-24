#include "lists.h"

/**
 * listint_len - print all list
 * @h: the list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h);
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
