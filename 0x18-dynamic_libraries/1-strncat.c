#include "main.h"
/**
  **_strncat - function that concatenates two strings
  *@dest: first string
  *@src: second string
  *@n: number of characters printed from src
  *Return: string at pointer dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (s < n && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
