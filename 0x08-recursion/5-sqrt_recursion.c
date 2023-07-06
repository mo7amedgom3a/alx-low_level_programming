#include "main.h"
/**
 * check - Checks for the square root of n
 *
 * @k: Guess at sqrt
 *
 * @n: Number to find sqrt of
 *
 * Return: -1 or sqrt of n
 */
int check(int k, int n)
{
	if (k * k == n)
		return (k);
	if (k * k >  n)
		return (-1);
	return (check(k + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square of a number
 *
 * @n: integer to find sqrt of
 *
 * Return: Natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
