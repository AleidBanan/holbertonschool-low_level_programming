#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character '\' should be printed
*
* Description: If n is 0 or less, only a newline is printed.
* otherwise, prints a diagonal line of length n,
* with each '\' character preceded by spaces
* so that it forms a diagonal.
*
* Return: void
*/

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
	_putchar('\n');
}

else
	{
	for (i = 0; i < n; i++)
		{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
}
