#include "main.h"
/**
  *_strspn - function that gets length of prefix
  *@s: segment of characters
  *@accept: only excepted characters
  *Return: number of accepted bytes in the segment
  */
unsigned int _strspn(char *s, char *accept)
{
	int c, v;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (v = 0; s[c] != accept[v]; v++)
		{
			if (accept[v] == '\0')
				return (c);
		}
	}
	return (0);
}
