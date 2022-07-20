/**
 * cal_pow - calculate value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: result of x exponent y
 */
int cal_pow(int x, unsigned int y)
{
	if (y == 1)
		return (x);
	return (x * cal_pow(x, y - 1));
}

/**
 * _pow_recursion - function that returns value of x raised to the power of y
 * @x: first argument
 * @y: second argument
 *
 * Return: the value of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (cal_pow(x, y));
}

