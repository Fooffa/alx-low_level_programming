#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - dog's informations
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t  - Typedef for struct dog
 */
typedef struct dog dog_t ;

#endif /* DOG_H */
