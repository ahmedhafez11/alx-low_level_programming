#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2, 4
 * Return: numbers from 0 to 9 except 2, 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 4 || i == 2)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
