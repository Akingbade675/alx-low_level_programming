#include "main.h"


/**
 * _puts - prints a string, followed by a new line
 * @s: string to be printed
 */
void _puts(char *s)
{
	if (s[0] == '\0')
		return;
	_putchar(s[0]);
	_puts(s + 1);
}

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	_puts(s);
	_putchar('\n');
}
