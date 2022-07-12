#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int len = strlen(s);
	char *r;

	for (r = s + (len - 1); r >= s; r--)
	{
		_putchar(*r);
	}
	_putchar('\n');
}
