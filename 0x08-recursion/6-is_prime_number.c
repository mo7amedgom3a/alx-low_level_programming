/**
 * check - Checks to see if number is prime
 *
 * @i: Factor check
 *
 * @n: Possible prime number
 *
 * Return: 1 if prime, 0 if not
 *
 */

int check(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (check(n, i + 1));
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
	if (n == 2)
		return (1);
	return (check(2, n));
}
