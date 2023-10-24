#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/*
 * print_listint - print all list elements
 * @h: the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_l *node = h;
	
	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		printf("%d\n", node->n);
		i++;
	}
	return (i);

}
