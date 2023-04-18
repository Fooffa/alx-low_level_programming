#include"dog.h"

/**
*free_dog - frees dogs.
*@d:input as a struct dog
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
