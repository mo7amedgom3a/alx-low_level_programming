#include <stdio.h>

/**
 * main -  Entry point
 *
 * discription :  prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	int dig1 = 48, dig2 = 49;
	while (dig1 != 57)
	{
	putchar(dig1);
	putchar(dig2);
	dig2++;
	if (dig2 == 57 + 1)
	{	dig1 += 1;
		dig2 = dig1 + 1;
	}
	if (dig1 != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
