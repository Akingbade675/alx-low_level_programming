#include <string.h>

/**
 * leet - a function that encodes a string into 1337
 * @s: pointer to string to encode
 *
 * Return: the encoded result
 */
char *leet(char *s)
{
	int i, j, len = strlen(s);
	char *a = "AEOTL", n[] = {52, 51, 48, 55, 49};

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[j] == a[i] || s[j] == a[i] + 32)
				s[j] = n[i];
		}
	}
	return (s);
}
