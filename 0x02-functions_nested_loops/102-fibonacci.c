#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long a = 0, b = 1, c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (i != 49)
			printf("%lu, ", c);
		else
			printf("%lu\n", c);
		a = b;
		b = c;
	}
	return (0);
}
