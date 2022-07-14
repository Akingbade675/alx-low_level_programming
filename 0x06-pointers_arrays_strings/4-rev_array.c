#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int *r = NULL, i = 0;

	while (n > 0)
	{
		r[i] = a[--n];
		_putchar(r[i++] + '0');
		if (n != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}
