#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if is is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	isupper(c);
	if (isupper(c))
		return (1);
	else
		return (0);
}
