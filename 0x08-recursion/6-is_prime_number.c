#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - check if number  is a prime
 * @n: int
 * Return: 1 if n prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - check for prime number recursively
 * @n: int
 * @i: counter
 * Return: 1 if n prime, 0 if not
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if ((n % i == 0) && (i > 0))
		return (0);
	return (_prime(n, i - 1));
}
