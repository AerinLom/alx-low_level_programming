#include "main.h"

/**
  *set_bit - function that sets value of bit to 1 at given index
  *@n: number to change the value
  *@index: the position at which the value is changed
  *Return: 1 if it worked, or -1 if an error occurred
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value_setter;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	value_setter = 1 << index;
	*n = *n | value_setter;
	return (1);
}
