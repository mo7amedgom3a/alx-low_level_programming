#include "main.h"
/**
 * main -  Entry point
 *
 * discription : program that prints _putchar.
 * Return: Always 0 (Success)
*/
int main(void)
{	char str[] = "_putchar";
	for (int i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
