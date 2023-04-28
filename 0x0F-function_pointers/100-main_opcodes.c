#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the code
 * @argc: number of elements
 * @argv: array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sz, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	sz = atoi(argv[1]);
	if (sz < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < sz; i++)
	{
		if (i == sz - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
