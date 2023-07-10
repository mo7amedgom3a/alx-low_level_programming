#include "main.h"
/**
 * str_concat - Concatenate two strings
 *
 * @s1: A string to be concatenated
 *
 * @s2: A string to be concatenated
 *
 * Return: Pointer to newly allocated memory
 * which is equal to @s1 + @s2 (SUCCESS) OR
 * NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2) + 1;

	ptr = (char *)malloc(size);

	if (ptr == NULL)
		return (NULL);


	i = 0;

	while (*s1)
	{
		ptr[i] = s1[0];
		i++, s1++;
	}

	while (*s2)
	{
		ptr[i] = s2[0];
		i++, s2++;
	}

	ptr[i] = '\0';
	return (ptr);
}
