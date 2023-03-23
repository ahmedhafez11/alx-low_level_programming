#include "main.h"
/**
 * positive_or_negative - tell us if the number is + or -
 * @n: integer
 * Return: always0
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
