#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10times.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
