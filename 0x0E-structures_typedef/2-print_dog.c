#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("(nil)");
	else
		printf("Name: %s", d->name);
	if (!d->age)
		printf("(nil)");
	else
		printf("Age: %.6f", d->age);
	if (!d->owner)
		printf("(nil)");
	else
		printf("Owner: %s", d->owner);
}
