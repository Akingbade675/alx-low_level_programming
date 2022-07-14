#include <string.h>
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @s: parameter for string to capitalize
 *
 * Return: result as a pointer
 */
char *cap_string(char *s)
{
	char ws[] = {32, 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int sp, i = 0, len = strlen(s);

	while (i < len)
	{
		for (sp = 0; sp < 13; s++)
		{
			if (s[i] == ws[sp] && islower(s[i + 1]))
				s[i + 1] -= toupper(s[i + 1]);
		}
		i++;
	}
	return (s);
}
