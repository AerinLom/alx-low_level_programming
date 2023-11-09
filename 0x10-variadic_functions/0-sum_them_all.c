#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *sum_them_all - function that returns sum of all parameters
  *@n: number of arguments
  *@...:arguments
  *
  * Return: If n == 0 - 0
  *         Otherwise - the sum of all parameters.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int num_p, t_sum = 0;

	if (n == 0)
		return (0);

	va_start(add, n);

	for (num_p = 1; num_p <= n; num_p++)
		t_sum += va_arg(add, int);

	va_end(add);
	return (t_sum);
}
