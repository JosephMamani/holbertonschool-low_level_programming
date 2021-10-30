#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*------------reserving memory ---------------*/
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		arr[row] = malloc(sizeof(int) * width);

		if (arr[row] == NULL)
		{
			while (--row >= 0)
				free(arr[row]);
			free(arr);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			arr[row][col] = 0;
	}
	return (arr);
}
