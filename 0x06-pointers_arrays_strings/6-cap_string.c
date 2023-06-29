#include "main.h"
/**
 * lower - determine the lowercase
 * @c: character
 * Return 1 if true 0 if false
*/

int lower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * is_seperator - return true if is is_seperator
 * @c: character
*/

int is_seperator(char c)
{
	int i;
	int sep[] = " \n\t,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == sep[i])
			return (1);
	return (0);
}
/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
*/
char *cap_string(char *c)
{
	char *p = c;
	int is_sep = 1;

	while (*p)
	{
		if (is_seperator(*c))
			is_sep = 1;
		else if (lower(*c) && is_sep)
		{
			*s -= 23;
			is_sep = 0;
		}
		else
			is_sep = 0;
		c++;
	}
	return (p);
}

