#include "main.h"
/**
  *_puts - prints a string and then a new line
  *
  *@str: string that is printed
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
