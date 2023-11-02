#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *_calloc - function that allocates memory for an array
  *@nmemb: amount of elements
  *@size: size of elements
  *Return: pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;

	if (nmemb == 0 || size == 0)
	return (NULL);

	cal = calloc(nmemb, size);

	if (cal == NULL)
	return (NULL);

	else
	return (cal);
}

