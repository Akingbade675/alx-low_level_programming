#include <stdio.h>

/**
 * main -  prints the size of various types
 *
 * Return: is 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(li));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(lli));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}
