#include "main.h"
/**
  *print_last_digit - Print the last digit of number
  *@n: The number to be read
  *Return: Value of the last digit of number
  */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
