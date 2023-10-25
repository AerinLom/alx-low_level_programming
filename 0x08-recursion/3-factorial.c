#include "main.h"
/**
  *factorial - function that returns the factorial of given number
  *@n: input number
  *Return: -1 if negative, 1 if zero or factorial if positive
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
