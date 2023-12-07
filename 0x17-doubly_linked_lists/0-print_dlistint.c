#include "lists.h"
/**
 * print_dlintint - print all elements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n",h->n);
		i++;
		h = h->next;
	}
	return i;
}
