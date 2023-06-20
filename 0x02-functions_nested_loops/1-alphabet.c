#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar fumcton to print
 * Return void
 *
*/
void print_alphabet(void)
{
	char ch = 'a';

	while (ch != 'z' + 1)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
