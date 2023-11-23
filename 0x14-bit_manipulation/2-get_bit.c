#include "main.h"

/**
  *get_bit - function that returns value of bit at given index
  *@n: number where bits are checked
  *@index: index where bit is checked
  *Return: value of bit, or -1 if there is errors
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask, bit_check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	bit_mask = 1UL << index;
	bit_check = n & bit_mask;

	if (bit_check == bit_mask)
	{
		return (1);
	}

	return (0);
}
