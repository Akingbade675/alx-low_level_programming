#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a pointer to a struct dog object
 * @name: string name
 * @age: float age
 * @owner: string owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
