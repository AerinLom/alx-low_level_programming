#include "main.h"

/**
  *binary_to_uint - function that converts binary number to int
  *@b: binary num to convert
  *Return: converted num or 0 if function fails
  */

unsigned int binary_to_uint(const char *b)
{
	int array_val;
	unsigned int convert_num;

	convert_num = 0;

	if (!b)
	{
		return (0);
	}

	for (array_val = 0; b[array_val] != '\0'; array_val++)
	{
		if (b[array_val] != '0' && b[array_val] != '1')
		{
			return (0);
		}
	}

	for (array_val = 0; b[array_val] != '\0'; array_val++)
	{
		convert_num <<= 1;

		if (b[array_val] == '1')
		{
			convert_num += 1;
		}
	}
	return (convert_num);
}
