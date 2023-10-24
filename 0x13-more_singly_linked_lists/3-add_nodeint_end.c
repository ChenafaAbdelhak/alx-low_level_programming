#include "lists.h"

/**
 * add_nodeint_end - add a node at ethe end
 * @head: the head
 * @n: n value
 * Return: the new head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	tmp = *head;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	}
	return (node);
}
