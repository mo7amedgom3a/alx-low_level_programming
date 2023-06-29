#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */
char *leet(char *s)
{
	char *p = s;
	char ch[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(ch) / sizeof(char); i++)
		{
			if ((*s == ch[i]) || (*s == ch[i] + 32))
			{
				*s = 48 + val[i];
			}
		}
		s++;

	}
	return (p);
}
