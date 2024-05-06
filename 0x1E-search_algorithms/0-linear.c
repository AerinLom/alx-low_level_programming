#include "search_algos.h"
/**
  * linear_search - function that conducts a linear search
  * @array: array to search through for value
  * @size: size of array
  * @value: value to search for
  */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
