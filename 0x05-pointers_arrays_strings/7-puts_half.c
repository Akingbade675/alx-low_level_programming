#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: parameter 1
 */
void puts_half(char *str)
{
	int n, i, len = strlen(str);

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		n++;
	}
	else
	{
		n = len / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
