#include "main.h"
/**
 * identical - check if the two string ar identical or not
 *
 * @str1: first string compar
 *
 * @str2: second string
 *
 * @i: iterator
 *
 * @j: second iterator
 * Return: 1 if considered identical, 0 otherwise
 */
int identical(char *str1, char *str2, int i, int j)
{
	if (str1[i] == '\0' && str2[i] == '\0')
		return (1);

	if (str2[j] == '*')
	{
		while (str1[i] != '\0')
		{
			if (identical(str1, str2, i, j + 1))
				return (1);
			i++;
		}

		return (identical(str1, str2, i, j + 1));
	}

	if (str1[i] != str2[i])
	{
		return (0);
	}
	return (identical(str1, str2, i + 1));
}
/**
 * wildcmp - Compare two strings allowing for wildcard char
 *
 * @s1: String being compared
 *
 * @s2: String being compared against
 *
 * Return: 1 if considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (identical(s1, s2, 0, 0));
}
