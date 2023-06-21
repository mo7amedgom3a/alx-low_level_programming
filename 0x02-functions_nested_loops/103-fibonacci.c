#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float sum_even = 0;

	while (1)
	{
		sum = a + b;
		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			sum_even += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", sum_even);

	return (0);
}
