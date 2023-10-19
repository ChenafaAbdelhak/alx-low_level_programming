#include "lists.h"

/**
 * add_node_end - add a node at the end
 * @head: the head
 * str: string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *tmp;
	unsigned int len = 0;
	
	while (str[len] != '\0')
		len++;

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
		return (NULL);

	tail->str = strdup(str);
	tail->len = len;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = tail;
	}
	return (*head);
}
