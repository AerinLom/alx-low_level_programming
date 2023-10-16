#include "main.h"
/**
  *rev_string - function that reverses a string
  *@s: string to be reversed
  *Return: reversed string
  */
void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int t;

	while (s[c] != '\0')
		c++;
	for (t = 0; t < c; t++)
	{
		c--;
		r = s[t];
		s[t] = s[c];
		s[c] = r;
	}
}
