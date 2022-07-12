#include <stdio.h>
#include <string.h>

/**
 * print_array - prints n elements of an \
 array of integers, followed by a new line
 * @a: array as argument
 * @n: number of element to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		else
			printf(", ");
	}
	printf("\n");

}
