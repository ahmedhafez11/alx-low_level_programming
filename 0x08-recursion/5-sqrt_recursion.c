#include "main.h"

/**
 * _sqrt_recursion -  the natural square root of a number
 * @n: integar number
 * Return: integar
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - give the square power
 * @i: the power of int
 * @n: given int
 * Return: integar
 */
int square(int n, int i)
{
	if (i * i == 0)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (square((n, i + 1)));
	}
	else
		return (-1);
}
