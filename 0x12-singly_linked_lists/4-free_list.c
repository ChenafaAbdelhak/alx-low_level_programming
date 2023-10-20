#include "lists.h"

/**
 * free_list - free the list
 * @head: the list head
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	free(tmp);
	free(head);
}
