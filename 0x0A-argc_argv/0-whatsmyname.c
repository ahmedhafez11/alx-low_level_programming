#include <stdio.h>
#include "main.h"
/**
 * * main - prints the name of the program
 * @arnum: number of arguments
 * @ararg: array of arguments
 * Return: Always 0
 */
int main(int arnum __attribute__((unused)), char *ararg[])
{
	printf("%s\n", *ararg);
	return (0);
}
