#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: will use at most @n bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
