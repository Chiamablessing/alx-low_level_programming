#include "main.h"
/**
 * free_grid - frees the memory of a 2 dimensional array
 * @grid: double pointer pointing to the 2 dimensional
 * array to be freed
 *
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		if (grid[h] != NULL)
		{
			free(grid[h]);
		}
	}

	free(grid);
}
