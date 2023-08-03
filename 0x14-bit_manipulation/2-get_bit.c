#include "main.h"
/**
 * get_bit - return one bit
 * @n: the number
 * @index: the position to read the bit
 * Description: return 1 bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
