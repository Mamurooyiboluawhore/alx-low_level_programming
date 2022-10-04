#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees two dimensional Array previously created
 * @grid: address two dimensional grid
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
