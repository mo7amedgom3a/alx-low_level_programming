#include "main.h"
/**
 * puts2 - prints part of a string
 * @str: string to be printed
 *
 * Return: void
 **/
void puts2(char *str)
{
	int l = strlen(str), i;

	for (i = 0; i < l; i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
