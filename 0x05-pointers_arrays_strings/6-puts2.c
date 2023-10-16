#include "main.h"
/**
  *puts2 - function that prints every other character of a string
  *@str: input string
  *Return: every other character of string
  */
void puts2(char *str)
{
	int i = 0;
	int r = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	r = i - 1;
	for (o = 0; o <= r; o++)
	{
		if (o % 2 != 1)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
