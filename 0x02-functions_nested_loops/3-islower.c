#include "main.h"
/**
 * _islower - show alphabet aand numbers
 * @c: is the char to be checked
 * Return: 1 for lower character and 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
	_putchar('\n');
}
