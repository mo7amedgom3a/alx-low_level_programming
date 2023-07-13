#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free functions
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for @ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to new allocated memory
 * NULL, if @ptr is NULL (FAILURE) or
 * NULL, if @new_size == 0 && @ptr != NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return ('\0');

		return (p);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	p = malloc(new_size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < old_size; i++)
		((char *)p)[i] = ((char *)ptr)[i];

	free(ptr);
	return ((void *)p);
}
