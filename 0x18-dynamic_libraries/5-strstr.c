#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: first pointer parameter
 * @needle: second parameter
 *
 * Return: pointer to the beginning of the located substring, \
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
