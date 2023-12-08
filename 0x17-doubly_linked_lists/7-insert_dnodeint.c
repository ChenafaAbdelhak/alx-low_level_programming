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
	dlistint_t *node, *i_node, *pr, *head = *h;

	if (idx == 0)
		return add_dnodeint(h, n);

	node = get_dnodeint_at_index(head, idx);
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

/**
 * get_dnodeint_at_index - get the idxth node
 * @head: the head
 * @index: index
 * Return: the idxth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        unsigned int i = 0;

        while (head)
        {
                if (i == index)
                        return (head);
                i++;
                head = head->next;
        }
        return (NULL);
}
