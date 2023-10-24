#include "lists.h"

/**
 * free_listint - free a while list
 * @head: the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
