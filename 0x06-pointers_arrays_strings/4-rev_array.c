#include "main.h"
/**
  *reverse_array - function that reverses an array of integers
  *@a: array of integers
  *@n: number of elements
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int r;
	int l;

	for (r = 0; r < n--; r++)
	{
		l = a[r];
		a[r] = a[n];
		a[n] = l;
	}
}
