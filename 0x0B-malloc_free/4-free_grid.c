#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional array
 * @grid: the array
 * @height: number of rows
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
