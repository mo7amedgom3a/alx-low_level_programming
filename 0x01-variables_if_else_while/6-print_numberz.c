#include <stdio.h>

/**
 * main -  Entry point
 *
 * discription : Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	int i = 48;
	while (i < 58)
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
