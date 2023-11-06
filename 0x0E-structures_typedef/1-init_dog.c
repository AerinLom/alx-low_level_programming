#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - initialises a variable of struct dog
  *@d: pointer to struct dog
  *@name: name of dog
  *@age: age of dog
  *@owner: owner of dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->owner = owner;
	d->name = name;
	d->age = age;
}
