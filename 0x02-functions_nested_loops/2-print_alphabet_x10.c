#include "main.h"
/**
  *print_alphabet_x10 - function for this code
  *Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int r = 0;
	char t;

	while (r <= 9)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
		r++;
	}
}
