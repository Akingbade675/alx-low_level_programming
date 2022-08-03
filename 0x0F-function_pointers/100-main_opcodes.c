#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *, int);

/**
 * main - Entry point
 * @argc: argument count
 * @argv:argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int bytes;

	bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, bytes);

	return (0);
}

/**
 * print_opcodes - prints opcode of a program
 * @code: address of function
 * @bytes: bytes to write
 */
void print_opcodes(char *code, int bytes)
{
	int i = 0;

	while (i < bytes)
	{
		printf("%.2hhx", code[i++]);
		if (i == bytes)
			continue;
		printf(" ");
	}
	printf("\n");

}
