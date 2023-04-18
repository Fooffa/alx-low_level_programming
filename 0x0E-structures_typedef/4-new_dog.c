#include"dog.h"

/**
*_strcpy - copies the string pointed to by src,
*to the buffer pointed to by dest
* Return: the copy as a string
*@dest: input as a string
*@src:input as a string
*/

char *_strcpy(char *src)
{
	int i = 0, j;
	char *dest;

	if (src == NULL)
		return (NULL);
	while (*(src + i))
		i = i + 1;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dest[j] = *(src + j);
	dest[j] = '\0';
	return (dest);
}




/**
*new_dog - creates a new dog.
*Return: type dog_t
*@name: input as a char
*@age: input as a float
*@owner: input as a char
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpyname, *cpyowner;
	dog_t *poppy;

	if (name == NULL || owner == NULL)
		return (NULL);
	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
	{
		free(poppy);
		return (NULL);
	}
	cpyname = _strcpy(name);
	if (cpyname == NULL)
	{
		free(poppy);
		return (NULL);
	}
	poppy->name = cpyname;
	poppy->age = age;
	cpyowner = _strcpy(owner);
	if (cpyowner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}
	poppy->name = cpyname;
	return (poppy);
}
