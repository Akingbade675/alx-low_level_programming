#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers using
 * the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, jump = sqrt(size);

	if (array)
	{
		while (start < size)
		{
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
			if (array[jump] < value)
			{
				start = jump;
				jump += sqrt(size);
				if (jump < size)
					continue;
				printf("Value checked array[%lu] = [%d]\n", start, array[start]);
			}

			printf("Value found between indexes[%lu] and [%lu]\n", start, jump);

			for (i = start; i <= jump && i < size; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
	}

	return (-1);
}
