#include "main.h"
/**
  *print_sign- checks the signs of numbers
  *@n: number being checked
  *Return: 1 if number positive, 0 if number is zero, -1 if number negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
