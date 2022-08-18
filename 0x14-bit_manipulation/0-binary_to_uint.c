#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if any error
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0, len = 0, i = 0;

	if (!b)
		return (0);

	while (b[i++])
		len++;
	for (i = 1; len; i *= 2)
	{
		if (b[--len] == 48 || b[len] == 49)
		{
			sum += ((b[len] - 48) * i);
			continue;
		}
		return (0);
	}

	return (sum);
}
