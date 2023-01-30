#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers using
 * the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index, low = 0, high = size - 1, pos;
	if (array)
	{
		while ((array[high] != array[low]) && (value >= array[low]))
		{
			pos = ((double)(high - low) / (array[high] - array[low]));
			pos *= (value - array[low]);
			pos += low;

			if (pos >= size)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				return (-1);
			}
			else
				printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
			{
				index = pos;
				/*while (array[index - 1] == value)
					index--;*/
				return (index);
			}
		}
		if (array[low] == value)
			return (low);
		else
			return (-1);
	}

	return (-1);
}
