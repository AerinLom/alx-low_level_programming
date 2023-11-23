#include "main.h"

/**
 * flip_bits - function that returns number of bits needed
 * to flip to get from one number to another
 * @n: first number to flip
 * @m: second number to flip
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bit_count = 0;

	while (flip != 0)
	{
		bit_count += flip & 1;
		flip >>= 1;
	}
	return (bit_count);
}
