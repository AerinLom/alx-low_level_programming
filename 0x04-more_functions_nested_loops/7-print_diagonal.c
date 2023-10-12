#include "main.h"
/**
  *print_diagonal - function that prints a diagonal line
  *@n: number of times the line prints
  */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r;
		int s;

		for (r = 0; r < n; r++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == r)
				_putchar('\\');
				else if (s < r)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
