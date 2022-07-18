#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals \
 * of a square matrix of integers
 * @a: first parameter - array
 * @size: second parameter
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = size - 1, i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[s1];
		sum2 += a[s2];
		s1 += (size + 1);
		s2 += (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
