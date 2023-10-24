#include "lists.h"

/**
 * pop_listint - remove the head
 * @head: head
 * Return: n value
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
	
}
