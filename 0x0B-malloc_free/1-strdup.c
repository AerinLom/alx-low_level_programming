#include "main.h"
#include <stdlib.h>
/**
  *_strdup - function that allocates and copies space in memory
  *@str: string that is copied
  *Return: NULL if str is NULL or pointer to copied string
  */
char *_strdup(char *str)
{
	char *ptr;
	int c = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		c++;

	ptr = malloc(sizeof(char) * c + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
