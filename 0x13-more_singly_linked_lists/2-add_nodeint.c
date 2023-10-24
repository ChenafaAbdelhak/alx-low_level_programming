#include "lists.h"

/**
 * add_nodeint - add a node to the beginning
 * @head: adress of the head pointer
 * @n: n value
 * Return: tha new head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	return (node);
}
