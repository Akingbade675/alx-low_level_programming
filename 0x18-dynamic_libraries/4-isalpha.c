#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for lowercase character.
 * @c: character passed to _isalpha function
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	isalpha(c);
	if (isalpha(c))
		return (1);
	else
		return (0);
}
