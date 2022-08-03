#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector, array of pointers
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
