#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments
 * @argnum: number of arguments
 * @ararg: array of arguments
 * Return: Always 0
 */
int main(int argnum, char *ararg[])
{
	(void) ararg;
	printf("%d\n", argnum - 1);
	return (0);
}
