#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, \
 starting with the first character, followed by a new line
 * @str: parameter 1
 */
void puts2(char *str)
{
	int i = 0, len = strlen(str);

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
