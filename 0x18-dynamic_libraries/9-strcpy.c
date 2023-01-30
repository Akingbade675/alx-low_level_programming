#include <string.h>

/**
 * _strcpy - copies the string pointed to by src, including the \
 terminating null byte (\0), to the buffer pointed to by dest
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
