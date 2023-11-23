#include "main.h"

/**
  *clear_bit - function that sets value of bit to 0 at given index
  *@n: number to change the value
  *@index: the position at which the value is changed
  *Return: 1 if it worked, or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
