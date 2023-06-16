#include <stdio.h>

/**
 * main : Entry point
 * description : alphabet from a to z
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
