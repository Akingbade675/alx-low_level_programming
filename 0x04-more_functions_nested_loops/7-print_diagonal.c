#include "main.h"

/**
 * print_diagonal - prints a square
 * @n: size of the square
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j < i; j++)
					_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
