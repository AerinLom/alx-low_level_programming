#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - allocates memory using malloc
  *@b: size of allocated memory
  *Return: 98 if fail, or pointer if success
  */

void *malloc_checked(unsigned int b)
{
	char *space;

	space = malloc(b);
	if (space == NULL)
	exit(98);
	else
	return (space);
}
