#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer parameter
 * @accept: constant byte
 *
 * Return: number of bytes in the initial segment of s \
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
