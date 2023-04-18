#include"dog.h"

/**
*init_dog - initialize a variable of type struct dog
*@d:input as a struct dog
*@name: input as a char
*@age: input as a float
*@owner: input as a char
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
