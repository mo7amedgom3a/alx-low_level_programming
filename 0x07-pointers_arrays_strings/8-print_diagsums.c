#include "main.h"
/**
 * print_diagsums - Prints the sum of diagonals
 *
 * @a: Pointer to an array
 *
 * @size: Size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
