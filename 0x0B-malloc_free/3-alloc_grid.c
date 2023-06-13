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
	int count = 0, count2 = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((sizeof(int *)) * (height));

	if (grid == NULL)
	{
		free(grid);
		return (0);
	}

	for ( ; count < height; count++)
	{
		grid[count] = malloc((sizeof(int)) * (width));

		if (grid[count] == NULL)
		{
			for (count2 = count; count2 >= 0; count2--)
			{
				free(grid[count2]);
			}
			free(grid);
			return (0);
		}
	}

	return (grid);
}
