int _isprime(unsigned int, int);

/**
 * is_prime_number - determine if prime number
 * @n: integer parameter
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_isprime(n, 2));
}


/**
 * _isprime - determine if n is a prime number
 * @n: number
 * @i: iterator
 *
 * Return: 1 is n is prime and 0 if not
 */

int _isprime(unsigned int n, int i)
{
	if (n == i || i > 9)
		return (1);
	if (n % i == 0)
		return (0);
	return (_isprime(n, i + 1));
}
