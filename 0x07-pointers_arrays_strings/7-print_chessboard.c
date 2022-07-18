#include <string.h>
#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a: pointer to an array
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (; j % 8 == 0; j++)
		{
			_putchar((*a)[j]);
		}
		_putchar('\n');
	}

}
