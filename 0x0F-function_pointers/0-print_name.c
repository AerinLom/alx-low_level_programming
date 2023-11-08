#include "function_pointers.h"
#include <stdio.h>

/**
  *print_name - function that prints a name
  *@name: input string for name
  *@f: pointer to function
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
