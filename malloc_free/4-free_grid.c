#include <stdlib.h>
/**
* free_grid - frees a 2D grid previously created
* @grid: pointer to the 2D array
* @height: number of rows
*
* Description: Frees grid previously created
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
