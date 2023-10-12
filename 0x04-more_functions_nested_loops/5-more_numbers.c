#include "main.h"

/**
  *more_numbers - function that prints 10 sets of numbers
  *
  *Return: Always 0 (Success)
  */
void more_numbers(void)
{
	int n;
	int r;

	for (r = 0; r <= 9; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
