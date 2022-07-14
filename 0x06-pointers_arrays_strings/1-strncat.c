#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: will use at most @n bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
