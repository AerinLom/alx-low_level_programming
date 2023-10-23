#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - function that prints the sum of two diagonals
  *@a: input array
  *@size: size of array
  *Return: Always 0 (Success)
  */
void print_diagsums(int *a, int size)
{
	int q, w, sumd1 = 0, sumd2 = 0;

	for (q = 0; q <= (size * size); q = q + size + 1)
	sumd1 = sumd1 + a[q];
	for (w = size - 1; w <= (size * size) - size; w = w + size - 1)
	sumd2 = sumd2 + a[w];
	printf("%d, %d\n", sumd1, sumd2);
}
