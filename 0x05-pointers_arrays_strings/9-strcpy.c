#include "main.h"

/**
  *_strcpy - copies a string at pointer location
  *@dest: destination
  *@src: source
  */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];

	return (dest);
}
