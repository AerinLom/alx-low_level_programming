#include "main.h"
/**
  *print_rev - prints a string in reverse and then a new line
  *@s: string to be reversed
  */
void print_rev(char *s)
{
	int a = 0;
	int q;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (q = a; q > 0; q--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
