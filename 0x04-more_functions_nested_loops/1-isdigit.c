#include "main.h"
/**
 * _isdigit - check if input is char or digit
 * @c: the ASCII code
 * Return: 1 if digit 0 if char
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
