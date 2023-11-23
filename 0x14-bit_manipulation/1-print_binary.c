#include "main.h"

/**
  *print_binary - function that prints binary representation of number
  *@n: number to be converted
  *Return: binary representation of number
  */

void print_binary(unsigned long int n)
{
	int number_bits = 0, iterator;
	unsigned long int temp = n;

	while (temp > 0)
	{
		temp >>= 1;
		number_bits++;
	}

	if (number_bits == 0)
	{
		_putchar('0');
	}
	else
	{
		for (iterator = number_bits - 1; iterator >= 0; iterator--)
		{
			_putchar((n & (1UL << iterator)) ? '1' : '0');
		}
	}
}
