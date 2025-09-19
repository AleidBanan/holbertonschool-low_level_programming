#include "main.h"

/**
 * array_range- creates an array of integers
 * @min: minimum number
 *@max: maximun number
 * Return: NULL (on failure)
 */

int *array_range(int min, int max)
{
	int i, n;
	int *p;

	if (min > max)
		return (NULL);
	n = max - min;
	p = malloc(sizeof(*p) * (n + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; i <= n && min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
