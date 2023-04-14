#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of strings togehter
 * @c1: first string
 * @c2: second string
 * @n: number of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *c1, char *c2, unsigned int n)
{
	char *c;
	unsigned int i = 0, j = 0, lenI = 0, lenJ = 0;

	while (c1 && c1[lenI])
		lenI++;
	while (c2 && c2[lenJ])
		lenJ++;

	if (n < lenJ)
		c = malloc(sizeof(char) * (lenI + n + 1));
	else
		c = malloc(sizeof(char) * (lenI + lenJ + 1));

	if (!c)
		return (NULL);

	while (i < lenI)
	{
		c[i] = c1[i];
		i++;
	}

	while (n < lenJ && i < (lenI + n))
		c[i++] = c2[j++];

	while (n >= lenJ && i < (lenI + lenJ))
		c[i++] = c2[j++];

	c[i] = '\0';

	return (c);
}
