#include "main.h"
/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/
void puts_half(char *str)
{
	int l = strlen(str), i;

	l++;
	for (i = l / 2; str[i] != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
