#include "function_pointers.h"
#include <stdio.h>

/**
  *array_iterator - function that executes a function's parameter
  *@array: input array
  *@size: size of array
  *@action: pointer to the function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int loop;

	if (action == NULL || array == NULL)
		return (-1);

	for (loop = 0; loop < size; loop++)
	{
		action(array[loop]);
	}
}
