#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	isdigit(c);
	if (isdigit(c))
		return (1);
	else
		return (0);
}
