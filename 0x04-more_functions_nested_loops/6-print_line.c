#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 * @n: the number of times the character -
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; x < n; i++)
		{
			_putchar(95);
		}
		putchar('\n');
	}
}
