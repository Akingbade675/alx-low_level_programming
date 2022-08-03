#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element \
 of an array
 * @array: base address of an array of integers
 * @size: length of array
 * @action: pointer to function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		while (i < size)
			(*action)(array[i++]);
}
