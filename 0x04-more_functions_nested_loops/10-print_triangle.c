#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			if (i > 1)
			{
				for (j = (size - i); j >= 1; j--)
				{
					_putchar(' ');
					if (j <= i)
						_putchar('#');
					_putchar('\n');
				}
			}
		}
	}
}
