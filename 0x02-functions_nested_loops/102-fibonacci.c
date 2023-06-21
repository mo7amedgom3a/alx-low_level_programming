#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2, c;

	printf("%d, %d, ", a, b);

	int i;

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		if (i != 50)
			printf("%d, ", c);
		else
			printf("%d\n", c);
	}
	return (0);
}
