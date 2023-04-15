#include <stdio.h>
#include "main.h"
/**
 * * main - prints all arguments
 * * @arnum: number of arguments
 * @ararg: array of arguments
 * Return: Always 0
 */
int main(int arnum, char *ararg[])
{
	int i;

	for (i = 0; i < argnum; i++)
	{
		printf("%s\n", ararg[i]);
	}
	return (0);
}
