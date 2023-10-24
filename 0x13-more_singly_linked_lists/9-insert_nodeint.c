#include "lists.h"
/**
 * insert_nodeint_at_index - insert in n position
 * @head: head
 * @idx: index
 * @n: n value
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *pn, *fn, *tmp;
	unsigned int i = 0;


	if (*head == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(lisint_t));
	node->n = n;
	node->next = NULL;

	if (*head == NULL && idx == 0)
		return (node);

	tmp = *head;

	while (tmp != NULL)
	{
		if (i == idx)
		{
			pn->next = node;
			node->next = tmp;
		}
		pn = tmp;
		tmp = tmp->next;
		i++;
	}

}
