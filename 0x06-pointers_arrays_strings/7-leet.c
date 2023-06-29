#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	char *p = s;

	while (*S)
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';

		else if (*s == 'L' || *s == 'l')
			*s = '1';

		else if (*s == 'O' || *s == 'o')
			*s = '0';

		else if (*s == 'T' || *s == 't')
			*s = '7';
		else
			continue;

		s++;
	}
	return (p);
}
