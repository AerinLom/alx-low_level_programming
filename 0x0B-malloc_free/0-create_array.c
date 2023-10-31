#include "main.h"
#include <stdlib.h>
/**
  **create_array - function that creates an array of chars
  *@size: size of array
  *@c: specific input char
  *Return: pointer to array or 0 if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *array = malloc(size * sizeof(char));

	for (n = 0; n < size; n++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		else
		{
		array[n] = c;
		}
	}
	return (array);
}
