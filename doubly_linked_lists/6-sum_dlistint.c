#include "lists.h"

/**
* sum_dlistint - sums n in each node and return it
* @head: Pointer to the head of the list
*
* Return: the total after addition
*/
int sum_dlistint(dlistint_t *head)

{

	if (head == NULL)
	return (0);

	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
