#include "main.h"
/**
  *_puts_recursion - function that prints a string
  *@s: input string
  *Return: printed string
  */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
