#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - function that prints numbers, followed by a new line
  *@separator: separator in between numbers
  *@n: number of integers in list
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
