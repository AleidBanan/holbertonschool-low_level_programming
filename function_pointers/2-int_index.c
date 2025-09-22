#include "main.h"
/**
* int_index - searches for an integer using a comparison function
* @array: array of integers
* @size: number of elements in the array
* @cmp: pointer to a function to compare values
*
* Description: search pointer.
*
* Return: index of matching element, or -1
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for ( i =0; i <=size)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
