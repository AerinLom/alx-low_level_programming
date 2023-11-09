#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_all - function that prints anything
  *@format: list of types for arguments
  *@...: variable amount of anything
  */

void print_all(const char * const format, ...)
{
	int r = 0;
	char *string, *separate = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[r])
		{
			switch (format[r])
			{
			case 's':
				string = va_arg(all, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", separate, string);
				break;
			case 'c':
				printf("%s%c", separate, va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", separate, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", separate, va_arg(all, double));
				break;

			default:
				r++;
				continue;
			}
			separate = ", ";
			r++;
		}
	}
	printf("\n");
	va_end(all);
}
