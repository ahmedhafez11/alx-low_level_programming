#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buf - create 1024 bytes for the buffer
 * @file_name: pointer of file name
 * Return: pointer of buffer
 */
char *create_buf(char *file_name)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
	return (buf);
}
/**
 * close_file - fucntion to close the file
 * @file_descriptor: file descriptor
 */
void close_file(int file_descriptor)
{
	int i;

	i = close(file_descriptor);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}
/**
 * main - take main file contents to new one
 * @argc: The number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, n, m;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buf(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	n = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		m = write(to, buf, n);
		if (file_to == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		n = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (n > 0);
	free(buf);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
