#include "search_algos.h"
/**
  * binary_search - function that conducts a binary search
  * @array: array to search through for value
  * @size: size of array
  * @value: value to search for
  * Return: index where value is found or -1 if not
  */

int binary_search(int *array, size_t size, int value)
{
	size_t low_values = 0, high_values = size - 1, index, sub_index;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low_values <= high_values)
	{
		index = low_values + (high_values - low_values) / 2;
		printf("Searching in array: ");
		for (sub_index = low_values; sub_index <= high_values; sub_index++)
		{
			printf("%d", array[sub_index]);
			if (sub_index < high_values)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[index] == value)
		{
			return (index);
		}
		else if (array[index] < value)
		{
			low_values = index + 1;
		}
		else
		{
			high_values = index - 1;
		}
	}
	return (-1);
}
