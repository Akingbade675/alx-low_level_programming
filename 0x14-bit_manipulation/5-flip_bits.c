#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first argument
 * @m: second argument
 * Return: the number of bits you would need to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, mask = 1, count = 0, i;

	for (i = 0; i < (sizeof(flip) * 8); i++)
	{
		if (flip & mask)
			count++;
		flip >>= 1;
	}

	return (count);
}
