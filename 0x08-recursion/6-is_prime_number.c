#include "main.h"

int i_prime(int n, int i);

/**
  *is_prime_number - function that returns 1 if input is prime number
  *@n: input number
  *Return: 1 if prime, 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (i_prime(n, n - 1));
}

/**
  *i_prime - function that recursively checks for a prime
  *@n: input number
  *@i: iterating number
  *Return: 1 if prime, 0 if not
  */
int i_prime(int n, int i)
{
	if (i == 1)
	return (1);

	if (n % i == 0 && i > 0)
	return (0);
	return (i_prime(n, i - 1));
}
