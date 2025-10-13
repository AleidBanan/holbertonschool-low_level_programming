#include <stdlib.h>
#include "lists.h"

/**
* add_dnodeint_end - function that adds new node to dlistint_t tail
* @head: Pointer to the head of the list
* @n: integer in the new node
*
* Return: new node, NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
	dlistint_t *temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	}
	return (new_node);
}
