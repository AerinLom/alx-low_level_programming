#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - function that returns pointer to 2 dimensional array
  *@width: width of grid
  *@height: height of grid
  *Return: pointer to array or NULL
  */

int **alloc_grid(int width, int height)
{
	int **grout;
	int i, f;

	if (height <= 0 || width <= 0)
		return (NULL);

	grout = malloc(sizeof(int *) * height);
	if (grout == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grout[i] = malloc(sizeof(int) * width);
		if (grout[i] == NULL)
		{
			free(grout);
			for (f = 0; f <= height; f++)
				free(grout[f]);
			return (NULL);
		}
		for (f = 0; f < width; f++)
			grout[i][f] = 0;
	}
	return (grout);
}
