#include "main.h"
/**
 * flip_bits - count the bit to change to another value
 * @n: the number
 * @m: the number to compare
 * Description: compare to ints a count the diferences in bits
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x != 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
