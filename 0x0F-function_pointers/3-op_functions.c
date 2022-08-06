#include "function_pointers.h"
#include <stdio.h>

/**
 * op_add - sum a and b
 * @a: first operand
 * @b: second operand
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract b from a
 * @a: first operand
 * @b: second operand
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiply a and b
 * @a: first operand
 * @b: second operand
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divide a by b
 * @a: first operand
 * @b: second operand
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - modulo a by b
 * @a: first operand
 * @b: second operand
 * Return: the remainder of the division a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


