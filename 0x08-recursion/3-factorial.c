/**
 * cal_fact - calculate factorial
 * @n: number(parameter)
 *
 * Return: result of fact
 */
int cal_fact(unsigned int n)
{
	if (n == 0)
		return (1);
	return (n * cal_fact(n - 1));
}

/**
 * factorial - function that calculates the factorial of a given number @n
 * @n: number input
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (cal_fact(n));
}

