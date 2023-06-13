#include "main.h"

/**
 * alloc_grid - allocates memory to a grid and initialises it to 0
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int count = 0; /* x = 0, y = 0;*/

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((sizeof(int *)) * (width));

	if (grid == NULL)
		return (0);

	for ( ; count < width; count++)
	{
		grid[count] = malloc((sizeof(int *)) * (height));

		if (grid[count] == NULL)
			return (0);
	}
	/*
	for ( ; x < height; x++)
		for ( ; y < width; y++)
			grid[x][y] = 0;
	*/

	return (grid);
}
