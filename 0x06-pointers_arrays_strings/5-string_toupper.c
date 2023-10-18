#include "main.h"
/**
  *string_toupper - converts lowercase string to uppercase
  *@v: a pointer to an array
  *Return: v
  */
char *string_toupper(char *v)
{
	int w = 0;

	while (v[w] != '\0')
	{
		if (v[w] >= 'a' && v[w] <= 'z')
		v[w] = v[w] - 32;
		w++;
	}
	return (v);
}
