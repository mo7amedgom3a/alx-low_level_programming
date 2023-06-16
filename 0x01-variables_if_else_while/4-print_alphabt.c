#include <stdio.h>

/**
 * main -  Entry point
 *
 * discription : Print all the letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{	char ch = 'a';
	while (ch <= 'z')
	{
	if (ch == 'q' || ch == 'e')
	{
	ch++;
	continue;
	}
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
