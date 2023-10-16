#include "main.h"
#include <stdio.h>

/**
  *print_array - function that prints elements of an array
  *@n: number of elements to be printed
  *@a: i dont know
  */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		if (q == n - 1)
		{
			printf("%d", a[q]);
		}
		else
		printf("%d, ", a[q]);
	}
	printf("\n");
}
