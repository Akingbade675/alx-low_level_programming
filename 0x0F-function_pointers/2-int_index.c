#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: base address of an array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function \
 does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, res = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);

	while (i < size)
	{
		res = cmp(array[i++]);
		if (res)
			return (i - 1);
	}

	return (-1);
}
