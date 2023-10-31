#include "main.h"
#include <stdlib.h>

/**
  *free_grid - function that frees a 2 dimensional grid
  *@grid: grid that needs to be freed
  *@height: height of grid
  *Return: empty grid
  */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}

	free(grid);
}
