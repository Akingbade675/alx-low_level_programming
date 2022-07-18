#include <string.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to find character
 * @c: character to locate in the string s
 *
 * Return: a pointer to the first occurrence of the character c in \
 * the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
