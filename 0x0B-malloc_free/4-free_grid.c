#include "main.h"

/**
 * free_grid - function that frees a 2 dimentional grid
 *
 * @grid: the grid to be freed
 * @height: dimentions of the grid to be freed
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int loop = 0;

	for ( ; loop < height; loop++)
	{
		free(grid[loop]);
	}

	free(grid);
}
