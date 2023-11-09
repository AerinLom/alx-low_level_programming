#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings - prints strings then a new line
  *@separator: separator between strings
  *@n: number of strings
  *@...:strings to be printed
  *Description: If separator is NULL, it is not printed
  *	If one of the strings if NULL, (nil) is printed instead.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *out;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		out = va_arg(str, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", out);

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
