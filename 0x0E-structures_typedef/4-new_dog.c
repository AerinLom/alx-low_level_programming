/**
  *_strcpy - copies a string at pointer location
  *@dest: destination
  *@src: source
  *Return: copied string at destination
  */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];
	dest[c] = '\0';
	return (dest);
}

#include <stdio.h>
#include "dog.h"
/**
  *_strlen- returns the length of a string
  *@s: string
  *Return: length of string
  */
int _strlen(char *s)
{
	int string = 0;

	while (*s != '\0')
	{
		string++;
		s++;
	}
	return (string);
}

#include "dog.h"
#include <stdlib.h>
/**
  *new_dog - creates new dog
  *@name: name of dog
  *@age: age of dog
  *@owner: name of owner
  *Return: pointer to new dog, NULL if fail
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int namelen;
	int ownerlen;

	namelen = _strlen(name);
	ownerlen = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (namelen + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->owner, owner);
	_strcpy(d->name, name);
	d->age = age;

	return (d);
}
