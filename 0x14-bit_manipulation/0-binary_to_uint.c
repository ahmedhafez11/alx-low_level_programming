#include "main.h"
/**
 * binary_to_uint - from binary to unsigned it
 * @b: the string
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int decimal_num = 0;

	if (!b)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		decimal_num = 2 * decimal_num + (b[n] - '0');
	}
	return (decimal_num);
}
