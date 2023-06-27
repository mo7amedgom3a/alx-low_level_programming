#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int i, num, sig = 1;

	if (s[i] == '\0')
		return (0);
	if (s[i] == '-')
	{
		sig = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num * sig);
}
