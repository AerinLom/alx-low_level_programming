#include "main.h"
#include <stdlib.h>
/**
  *_strdup - function that allocates and copies space in memory
  *@str: string that is copied
  *Return: NULL if str is NULL or pointer to copied string
  */
char *_strdup(char *str)
{
	char *ptr = malloc(sizeof(str));
	long unsigned int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
