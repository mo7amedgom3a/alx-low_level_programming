#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar fumcton to print
 * Return void
 *
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch != 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
