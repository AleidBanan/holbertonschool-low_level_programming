#include <stdlib.h>
#include "lists.h"

/**
* get_dnodeint_at_index - looks for n node and return it
* @head: Pointer to the head of the list
* @index: index of the node
*
* Return: pointer to the requested node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int count = 0;

	while (head != NULL)
	{

	if (index == count)
		return (head);
	head = head->next
	count++;
	}

	return (NULL);
}
