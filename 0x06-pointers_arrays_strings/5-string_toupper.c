#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 *
 * Return: all CAPS pointer to @s string
 */
char *string_toupper(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (islower(s[i]))
			s[i] = toupper(s[i]);
	}
	return (s);
}
