#include "lists.h"
/**
 * print_dlintint - print all elements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *head = h;

	if (!head)
		return (i);
	while (head)
	{
		printf("%d\n",head->n);
		i++;
		head = head->next;
	}
	return (i);
}
