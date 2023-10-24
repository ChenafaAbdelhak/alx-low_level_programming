#include "lists.h"

/**
 * free_listint2 - free a while list
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *ttmp;

	ttmp = *head;
	while (ttmp != NULL)
	{
		tmp = ttmp;
		ttmp = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
