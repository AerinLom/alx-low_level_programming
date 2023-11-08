#include "function_pointers.h"
#include <stdio.h>

/**
  *int_index - function that searches for an integer
  *@array: input array
  *@size: size of array
  *@cmp: pointer to func
  *Return: first index of element if integer, else -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int loop;

	if (size <= 0)
		return (-1);

	for (loop = 0; loop < size; loop++)
	{
		if (cmp(array[loop]))
			return (loop);
	}
	return (-1);
}
