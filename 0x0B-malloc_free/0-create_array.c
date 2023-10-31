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

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		array[n] = c;
	}
	return (array);
}
