#include "main.h"
/**
  *_abs - Computes absolute value of an integer
  *@c: number to be computed
  *Return: Absolute value of number or zero
  */

int _abs(int c)
{
	if (c < 0)
	{
		int abso_val;

		abso_val = c * -1;
		return (abso_val);
	}
	return (c);
}
