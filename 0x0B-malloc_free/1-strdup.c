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
	int i, size = strlen(str);
	char *ptr;

	ptr = (char *)malloc(size);

	if (ptr == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	ptr[size] = '\0';

	return (ptr);
}
