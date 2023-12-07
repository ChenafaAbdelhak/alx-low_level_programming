#include "lists.h"
/**
 * dlistint_len - count length
 * @h: head
 * Return: the length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
