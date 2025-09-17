#include "main.h"
/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL (str = NULL)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(width * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (array[i] == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				array[i][j] = 0;
			}
		}
	}
	for (i = 0; i < width; i++)
	{
		free(array[i]);
	}
	free(array);
	return (array);
}
