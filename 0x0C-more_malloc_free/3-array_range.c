#include "main.h"
#include <stdlib.h>

/**
  *array_range - function that creates an array of integers
  *@min: smallest num in array
  *@max: largest number in array
  *Return: array of integers or NULL
  */

int *array_range(int min, int max)
{
	int *range;
	int i = 0;
	int c;

	if (min > max)
	return (NULL);

	range = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (range == NULL)
	return (NULL);

	for (c = min; c <= max; c++)
	{
		range[i] = c;
		i++;
	}
	return (range);
}
