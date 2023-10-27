#include "main.h"
/**
  *_strchr - function that checks for an occurance
  *@s: string beign checked
  *@c: what is being checked for
  *Return: pointer to the first occurance
  */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

