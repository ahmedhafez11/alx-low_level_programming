#include "main.h"
/**
 * _isupper - check if letter is upper or not
 * @c: the ASCII code for the letter
 * Return: 1 if upper 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
