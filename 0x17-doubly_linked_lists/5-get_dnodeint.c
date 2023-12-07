#include "lists.h"
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
