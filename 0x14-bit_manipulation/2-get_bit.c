#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal variable
 * @index: index to get bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= (sizeof(n) * 8))
		return (-1);

	mask = n >> index;
	return (mask & 1);
}
