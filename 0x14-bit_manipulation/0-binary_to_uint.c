#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = strlen(b);

	if (b == NULL)
		return (0);
	for (int i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num = num * 2 + (b[i] - '0');
	}

	return (num);
}
