#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: parameter for check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	islower(c);
	if (islower(c))
		return (1);
	else
		return (0);
}
