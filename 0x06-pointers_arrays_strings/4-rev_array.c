#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(a[n - 1 - i] + '0');
		i++;
	}
	_putchar('\n');
}
