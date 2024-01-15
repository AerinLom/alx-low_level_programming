#include "main.h"
/**
  *_strpbrk - function that searches string for set of bytes
  *@s: input string
  *@accept: acceptable bytes
  *Return: pointer to s or NULL if byte not found
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *c = accept;

		while (*c != '\0')
		{
			if (*s == *c)
			return (s);
			c++;
		}
		s++;
	}
	return (0);
}
