#include "main.h"
/**
 * alloc_grid - Creates a 2 dimensional array of integers
 *
 * @width: Width/rows of the 2D array
 *
 * @height: Height/columns of the 2D array
 *
 * Return: Pointer to a 2 dimenstional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (k = 0; k <= i; k++)
				free(arr[k]);

			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
