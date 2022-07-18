#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer parameter
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
