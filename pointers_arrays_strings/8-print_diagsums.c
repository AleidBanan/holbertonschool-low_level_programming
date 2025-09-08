#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: pointer to the first element of the matrix
* @size: dimension of the square matrix (size x size)
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0, sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}

	print_number(sum_main);
	_putchar(',');
	_putchar(' ');
	print_number(sum_secondary);
	_putchar('\n');
}
