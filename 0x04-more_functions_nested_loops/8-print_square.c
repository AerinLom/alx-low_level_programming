#include "main.h"
/**
  *print_square - function that outputs a square
  *@size: the size of the square
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s;
		int w;

		for (s = 0; s < size; s++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
