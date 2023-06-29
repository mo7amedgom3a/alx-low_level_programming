#include "main.h"
/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;

	if (n <= i)
	{
		for (j = 0; src[j] != '\0'; j++)
			dest[j] = src[j];
	}

	else
	{
		for (j = 0; j < i; j++)
			dest[j] = src[j];
	}
	return (dest);
}
