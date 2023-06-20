#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_dig;

	if (n >= 0)
	{
		last_dig = n % 10;
		_putchar(last_dig + '0');
	}
	else if (n < 0)
	{
		last_dig = (-1) * (n % 10);
		_putchar(last_dig + '0');
	}
	return (last_dig);
}
