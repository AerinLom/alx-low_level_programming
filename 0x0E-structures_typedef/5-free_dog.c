#include "dog.h"
#include <stdlib.h>
/**
  *free_dog - function that frees memory in dog
  *@d: dog structure to be freed
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
