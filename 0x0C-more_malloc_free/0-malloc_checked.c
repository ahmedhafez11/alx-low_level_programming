#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memomry
 * @n: number of bytes
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int n)
{
	void *p;

	p = malloc(n);

	if (p == NULL)
		exit(98);

	return (p);
}
