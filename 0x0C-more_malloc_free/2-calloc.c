#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc, and initializes to 0
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 * Return: pointer to the allocated memory (SUCCESS) or
 * NULL if @nmemb or @size is 0 (FAILURE) or
 * NULL if insufficient memory was available
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return ('\0');

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < size * nmemb; i++)
		arr[i] = 0;
	return ((void *)arr);
}
