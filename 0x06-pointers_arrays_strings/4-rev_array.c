#include "main.h"
/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, temp, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;

		j--;
	}
}
