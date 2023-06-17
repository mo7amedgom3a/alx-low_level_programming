#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits
 *
 * Return: Always 0.
 */
int main(void)
{	int dig1 = 0, dig2 = 1, dig3 = 2;
	while (dig1 != 8 && dig2 != 9 && dig3 != 10)
	{
		putchar(dig1 + 48);
		putchar(dig2 + 48);
		putchar(dig3 + 48);
		dig3++;
		if (dig3 == 10 && dig2 != 9)
		{
			dig2++;
			dig3 = dig2 + 1;
		}
		if (dig2 == 9 && dig3 == 10)
		{
			dig1++;
			dig2 = dig1 + 1;
			dig3 = dig2 + 1;
		}
		if (dig1 != 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
