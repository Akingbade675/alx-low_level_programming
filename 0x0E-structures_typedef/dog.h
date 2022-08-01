#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - record for dogs
 * @name: name of dog
 * @age: age of the dog
 * @owner: the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H  */
