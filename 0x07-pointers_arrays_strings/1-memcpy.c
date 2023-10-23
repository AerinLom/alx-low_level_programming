#include "main.h"
/**
  *_memcpy - function that copies memory area
  *@dest: where copied memory will be stored
  *@src: memory being copied
  *@n: number of bytes being copied
  *Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
