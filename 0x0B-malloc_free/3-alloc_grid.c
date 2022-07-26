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
	int **arr, j, i;

	/* check If width or height is 0 or negative */
	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		for (j = 0; j < width; j++)
			arr[height][width] = 0;
		i++;
	}
	return (arr);
}
