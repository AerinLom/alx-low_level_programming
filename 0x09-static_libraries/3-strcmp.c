#include "main.h"
/**
  *_strcmp - function that compares two strings
  *@s1: first string
  *@s2: second string
  *Return: s1[r] - s2[r]
  */
int _strcmp(char *s1, char *s2)
{
	int r = 0;

	while (s1[r] != '\0' && s2[r] != '\0')
	{
		if (s1[r] != s2[r])
		{
		return (s1[r] - s2[r]);
		}
		r++;
	}
	return (0);
}
