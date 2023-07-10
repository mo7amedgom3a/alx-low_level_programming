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
	int i,  **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)calloc(height, sizeof(int *));

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
		arr[i] = (int *)calloc(width, sizeof(int));
	return (arr);
}
