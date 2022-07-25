#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously created \
by your alloc_grid function
 * @grid: pointer to 2 dimensional array
 * @height: number of row in the array
 */
void free_grid(int **grid, int height)
{
	(void)(height);
	free(grid);
}
