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
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (!d->owner)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
