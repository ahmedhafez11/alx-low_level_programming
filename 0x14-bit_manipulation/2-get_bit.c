#include "main.h"
/**
 * get_bit - number of bits in an index
 * @n: the number
 * @index: the number index
 * * Return: number of bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num_of_bits;

	if (index > 63)
		return (-1);
	num_of_bits = (n >> index) & 1;
	return (num_of_bits);
}
