#include "main.h"

int i_sqrt_recursion(int n, int i);
/**
  *_sqrt_recursion - function that returns natural square root of number
  *@n: input number
  *Return: natural square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (i_sqrt_recursion(n, 0));
}

/**
  *i_sqrt_recursion - recurses to find square root of number
  *@n: input number
  *@i: iterator number
  *Return: Square root
  */

int i_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (i_sqrt_recursion(n, i + 1));
}
