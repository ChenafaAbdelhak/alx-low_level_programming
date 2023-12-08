#include "lists.h"
/**
 * insert_dnodeint_at_index - inset a node at a specific position
 * @h: the head
 * @idx: index of position
 * @n: n
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *i_node, *pr;

	if (*h == NULL && idx != 0)
		return (NULL);

	node = get_dnodeint_at_index(*h, idx);
	if (!node)
		return (NULL);

	i_node = malloc(sizeof(dlistint_t));
	if (!i_node)
		return (NULL);

	i_node->n = n;
	i_node->next = node;
	pr = node->prev;
	pr->next = i_node;
	i_node->prev = pr;
	node->prev = i_node;

	return (i_node);
}
