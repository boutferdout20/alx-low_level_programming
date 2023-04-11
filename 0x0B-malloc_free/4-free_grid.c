#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free array
 * @grid: grid
 * @height: hieght
 * Return: nachfa
 */
void free_grid(int **grid, int height)
{
int z;
for (z = 0; z < height; z++)
{
free(grid[z]);
}
free(grid);
}
