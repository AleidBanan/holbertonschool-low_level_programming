#include <stdio.h>
#include "lists.h"

/**
* print_dlistint - Prints number of nods in  dlistint_t list.
* @h: Pointer to the head
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)

{

	size_t count = 0

	while (h!= NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
