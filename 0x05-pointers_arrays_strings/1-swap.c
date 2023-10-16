#include "main.h"
/**
  *swap_int - function that swaps values of integers
  *@a: integer value to swap
  *@b: integer value to swap
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
