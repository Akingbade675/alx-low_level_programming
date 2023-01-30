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
int binary_searchBtw(int *array, int value, int start, int end)
{
	int mid;

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



/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{

	size_t start = 1, jump = 1;
	int index;

	if (array)
	{
		while (array[jump] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);

			start = jump;
			jump *= 2;

			if (jump >= size)
			{
				jump = size - 1;
				break;
			}
		}

		printf("Value found between indexes[%lu] and [%lu]\n", start, jump);

		index = binary_searchBtw(array, value, start, jump);
		return (index);
	}

	return (-1);
}
