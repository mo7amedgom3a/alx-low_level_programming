#include "main.h"
#include <math.h>
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
	int i = 0;

	if (b == NULL)
		return (0);
	while (len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		num += ((pow(2, i)) * (b[len] - '0'));
		i++;
	}

	return (num);
}
