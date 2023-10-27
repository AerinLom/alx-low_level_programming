#include "main.h"
/**
  *_memset - function that fills memory
  *@s: the pointer
  *@b: the constant byte
  *@n: the amount of bytes of memory
  *Return: memory pointed to by s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		s[r] = b;
	}
	return (s);
}
