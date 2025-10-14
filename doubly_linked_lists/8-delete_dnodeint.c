#include <stdlib.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - remove a node at certain index
* @head: Pointer to the head of the list
* @index: node to be deleted
*
* Return: 1 if success, -1 if failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *current;

	unsigned int count;

	current = *head;

	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
