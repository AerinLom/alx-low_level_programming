#include "main.h"
/**
  *print_most_numbers - function that numbers except 4 and 2
  *
  *Return: Always 0 (Success)
  */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		_putchar(n);
	}
	_putchar('\n');
}
