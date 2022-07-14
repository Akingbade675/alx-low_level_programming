#include <string.h>

/**
 * leet - a function that encodes a string into 1337
 * @s: pointer to string to encode
 *
 * Return: the encoded result
 */
char *leet(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == 97 || s[i] == 65)
			s[i] = 4 + '0';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = 3 + '0';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = 0 + '0';
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = 7 + '0';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = 1 + '0';
	}
	return (s);
}
