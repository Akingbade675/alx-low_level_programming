#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to find the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	long int a;

	if (n < 0)
		n *= -1;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
