#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	if (num >= 98)
	{
		for (int i = num; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (int i = 0; i < 98; i++)
			printf("%d, ", i);
	}

	printf("%d", 98);
}
