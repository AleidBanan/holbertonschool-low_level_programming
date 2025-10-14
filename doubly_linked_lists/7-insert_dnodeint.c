#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - adds an new node at certain index
* @h: Pointer to the head of the list
* @idx: index of the new node
* @n: new node value
*
* Return: the pointer of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *current, *new_node;

	unsigned int count;

	current = *h;

	count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));


	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
