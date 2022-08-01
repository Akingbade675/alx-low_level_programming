#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: string name for dog
 * @age: age for the new dog
 * @owner: owner of the new dog
 * Return: pointer to newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int sn, i;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	/* length of string name + null terminator*/
	for (sn = 1; name[sn]; sn++)
		;
	dog->name = malloc(sizeof(char) * sn);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < sn; i++)
		dog->name[i] = name[i];

	dog->age = age;

	/* length of string owner + null terminator*/
	for (sn = 1; owner[sn]; sn++)
		;
	dog->owner = malloc(sizeof(char) * sn);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < sn; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
