#include "main.h"
/**
  **_strncpy - function that copies a string
  *@dest: first string
  *@src: second string
  *@n: number of characters copied
  *Return: string of pointer dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
