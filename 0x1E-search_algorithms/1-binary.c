#include "search_algos.h"

/**
 * printBtw - prints element in array between index start to end
 * @array: pointer to the first element of array
 * @start: index of array to start printing
 * @end: index of array to end printing
 */
void printBtw(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i == start)
			printf(" %d", array[i]);
		else
			printf(", %d", array[i]);

		if (i == end)
			printf("\n");
	}
}



/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, start = 0;
	size_t end = size - 1;

	if (array)
	{
		while (start <= end)
		{
			mid = (start + end) / 2;
			printBtw(array, start, end);

			if (array[mid] < value)
				start = mid + 1;
			else if (array[mid] > value)
				end = mid - 1;
			else
				return (mid);
		}
	}

	return (-1);
}
