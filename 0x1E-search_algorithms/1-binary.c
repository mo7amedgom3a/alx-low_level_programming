#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int start, end, mid;

	int i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf("%i%s", array[i], i == end ? "\n" : ", ");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
