#include "main.h"
/**
 * _strdup - Copies a string to new allocated space in memory
 *
 * @str: The string to be copied
 *
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *ptr;


	if (str == 0)
		return (NULL);

	size = strlen(str) + 1;

	ptr = malloc(size);


	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';

	return (ptr);
}
