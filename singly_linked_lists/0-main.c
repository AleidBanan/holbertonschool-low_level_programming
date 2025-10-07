#include "main.h"

/**
 * main - check the code for print_list function
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t node3 = {"World", 5, NULL};
	list_t node2 = {"Hello", 5, &node3};
	list_t node1 = {NULL, 0, &node2};
	list_t *head = &node1;

	print_list(head);
	return (0);
}
