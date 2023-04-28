#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints result
 * @argc: number of elements
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n, i;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	op = argv[2];
	i = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && i == 0) ||
	    (*op == '%' && i == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n, i));
	return (0);
}
