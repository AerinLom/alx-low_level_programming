#include "main.h"
#include <stdlib.h>

/**
  *str_concat - function that concatenates two strings
  *@s1: first string
  *@s2: second string
  *Return: Pointer to concat strings or NULL if failure
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *cc;
	int count1 = 0;
	int count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		count2++;
	}
	cc = malloc(sizeof(char) * (count1 + count2) + 1);

	if (cc == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		cc[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		cc[count1 + i] = s2[i];
	}
	return (cc);
}
