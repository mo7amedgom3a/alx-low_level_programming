#include "main.h"
#include <math.h>
/**
 * is_prime_recursive - Checks to see if number is prime
 *
 * @i: Factor check
 *
 * @n: Possible prime number
 *
 * Return: 1 if prime, 0 if not
 *
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 2)
		return (n == 0);
	if (i > sqrt(n))
		return (0);
	if (n % i == 0)
		return (0);

	return (n, i + 1);
}
/**
 * is_prime_number - States if number is prime
 *
 * @n: Number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
