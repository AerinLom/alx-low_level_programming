#include "main.h"
/**
  *_strchr - function that checks for an occurance
  *@s: string beign checked
  *@c: what is being checked for
  *Return: pointer to the first occurance
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		return (s);
		s++;
	}
		if (c == *s)
		return (s);
		return (NULL);
}
