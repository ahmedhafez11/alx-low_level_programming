#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory by bytes
 * @c: memory area to fill 
 * @a: char to copy
 * @n: number of copies
 *
 * Return: pointer 
 */
char *_memset(char *c, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		c[i] = a;
	}

	return (c);
}

/**
 * *_calloc - allocates memory for an array
 * @num: len of array
 * @s: size of each element in array
 *
 * Return: pointer
 */
void *_calloc(unsigned int num, unsigned int s)
{
	char *p;

	if (num == 0 || s == 0)
		return (NULL);

	p = malloc(s * num);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, num * s);

	return (p);
}
