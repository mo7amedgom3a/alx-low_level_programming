#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/
void print_rev(char *s)
{
	int l = strlen(s);

	while (l--)
	{
		_putchar(*(s + l));
	}
	_putchar('\n');
}
