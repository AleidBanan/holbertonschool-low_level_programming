#include <stdio.h>
#include "lists.h"

/**
* add_dnodeint – add new node to dlistint_t head.
* @h: Pointer to the head
* @n: integer in the new node
*
* Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node  == NULL )
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
