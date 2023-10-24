#include <lists.h>

/**
 * get_nodeint_at_index - get the nth node
 * @head: the head
 * @index: i
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head->next != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
