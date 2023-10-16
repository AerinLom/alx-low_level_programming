#include "main.h"
/**
  *puts_half - function that prints second half of string
  *@str: input string
  *Return: second half of string
  */
void puts_half(char *str)
{
	int a = 0;
	int b = 0;
	char *s = str;
	int l;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	b = (a - 1) / 2;
	for (l = b + 1; l < a; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}

