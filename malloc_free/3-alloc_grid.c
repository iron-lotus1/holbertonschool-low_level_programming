#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a two-dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i > 0)
				free(grid[--i]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
