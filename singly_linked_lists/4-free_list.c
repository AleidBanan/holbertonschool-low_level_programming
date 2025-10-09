#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a linked list_t list.
* @head: Pointer to the head of the list.
*/

void free_list(list_t *head)

{

	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;

		free(head->str);
		free(head);
		head = temp;
	}
}
