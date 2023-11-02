#include "main.h"
#include <stdlib.h>

/**
  *string_nconcat - function that concatenates two strings
  *@s1: first string
  *@s2: second string
  *@n: number of bytes allowed on s2
  *Return: pointer to concat string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c;
	int len1 = 0;
	unsigned int len2 = 0;
	char *r;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (c = 0; s1[c] != '\0'; c++)
	{
		len1++;
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
		len2++;
	}
	r = malloc(sizeof(char) * (len1 + n) + 1);
	if (r == NULL)
	return (NULL);
	if (n >= len2)
	{
		for (c = 0; s1[c] != '\0'; c++)
			r[c] = s1[c];
		for (c = 0; s2[c] != '\0'; c++)
			r[len1 + c] = s2[c];
		r[len1 + c] = '\0';
	}
	else
	{
		for (c = 0; s1[c] != '\0'; c++)
			r[c] = s1[c];
		for (c = 0; c < n; c++)
			r[len1 + c] = s2[c];
		r[len1 + c] = '\0';
	}
	return (r);
}
