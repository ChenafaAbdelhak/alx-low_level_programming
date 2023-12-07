#include "lists.h"
/**
 * add_dnodeint_end - add anode at the end
 * @head: the head
 * @n: the value
 * Return: the adress of the new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = node;
	node->prev = current;
	return (node);

}
