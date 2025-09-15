#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array of chars, initialized with a specific char
* @size: size of the array
* @c: character to initialize each element with
*
* Description: Allocates memory for an array of size and fills it with c.
*
* Return: pointer to the newly created array, or NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr;

	if (size == 0)
		return (NULL);
	char *arr = malloc(size * sizeof(char));
		if (arr == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
