#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: pointer to name
 * @f: pointer to function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
