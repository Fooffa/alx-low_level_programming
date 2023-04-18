#include"dog.h"

/**
*init_dog - initialize a variable of type struct dog
*@d:input as a struct dog
*@name: input as a char
*@age: input as a float
*@owner: input as a char
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;
	if (poppy == 0)
		return (NULL);
	poppy->name = name;
	poppy->age = age;
	poppy->owner = owner;
	return (poppy);
}
