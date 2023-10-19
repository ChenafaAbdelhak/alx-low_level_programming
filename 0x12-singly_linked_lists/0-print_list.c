#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print a list
 * @h: the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
	
}
