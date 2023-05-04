#include "main.h"
/**
 * flip_bits - find the number of bits by counting them
 * @n: the first num
 * @m: the second num
 * Return: bits number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int num;
	unsigned long int exp = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = exp >> i;
		if (num & 1)
			j++;
	}
	return (j);
}
