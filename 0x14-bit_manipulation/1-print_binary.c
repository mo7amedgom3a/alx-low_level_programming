#include "main.h"
/**
 * print_binary - decimal to binary without use / %
 * @n: the decimal
 * Description: convert decimal to binary
 * section header: the header of this function is holberton.h
 * Return: no return
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
