#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index of a listint_t linked
 *@head: Pointer to a pointer to the head of the list
 *@index: Index of the node to delete
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	if (current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
