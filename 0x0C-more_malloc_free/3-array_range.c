#include <stdlib.h>
#include "main.h"

/**
 * *array_range - makes array of type int
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
