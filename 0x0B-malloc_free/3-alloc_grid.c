#include <stdlib.h>

/**
 * alloc_grid - A function that create and initialize a 2 dimensional \
array of integers to 0
 * @width: number of column for the array
 * @height: number of row for the array
 * Return: a pointer to the array, or NULL if fail
 */
int **alloc_grid(int width, int height)
{
	int **arr, *ar, h = 0, i, j;

	/* check If width or height is 0 or negative */
	if (width < 1 || height < 1)
		return (NULL);
	while (h < height)
	{
		ar = malloc(sizeof(int) * width);
		if (ar == NULL)
			return (NULL);
		arr = &ar;
		h++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[height][width] = 0;
	return (arr);
}
