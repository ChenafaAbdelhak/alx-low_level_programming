#include "lists.h"

/**
 * add_node - add a node as a head
 * @head: the head
 * @str: string
 * Return: new head
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t node;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	node->str = strdup(str);
	while (*str != NULL)
	{
		str++;
		len++;
	}
	node->len = len;
	node->next = head;

	return (node);
}
