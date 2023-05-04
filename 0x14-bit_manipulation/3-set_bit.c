#include "main.h"
/**
 * set_bit - change bit to 1 at and index
 * @n: pointer
 * @index: the index of the number
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
