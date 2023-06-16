#include <stdio.h>

/**
 * main -  Entry point
 *
 * discription : Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	char ch1 = '0', ch2 = 'a';
	while (ch1 <= 57)
	{
	putchar(ch1);
	ch1++;
	}
	while (ch2 <= 'f')
	{
	putchar(ch2);
	ch2++;
	}
	putchar('\n');
	return (0);
}
