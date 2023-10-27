#include "main.h"
/**
  **_strcat - function that concatenates two strings
  *@dest: first string
  *@src: second string
  *Return: a pointer to string at dest
  */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';

	return (dest);
}
