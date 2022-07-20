/**
 * _sqrt - calculate the square root of n
 * @n: number to find square roit
 * @m: starting number
 *
 * Return: square root if n is a perfect square, -1 otherwise
 */

int _sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m < n / 2)
		return (_sqrt(n, m + 1));
	else
		return (-1);
}


/**
 * _sqrt_recursion - calculates the natural square root of a given number
 * @n: number argument
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n <= 0 || n == 2 || n == 3)
		return (-1);
	else if (n == 1)
		return (1);
	return (_sqrt(n, 2));
}
