#include "main.h"
#include <stdio.h>
/**
 * error_file - detect any error in file
 * @fiefrom: form of the file
 * @fileto: the location to send file to
 * @arg: argument
 * Return: void
 */
void error_file(int filefrom, int fileto, char *arg[])
{
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
		exit(98);
	}
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
		exit(99);
	}
}
/**
 * main - check for error in code
 * @argnum: arguemnts number
 * @arg: arguemnts
 * Return: 0
 */
int main(int argnum, char *arg[])
{
	int filefrom, fileto, error;
	ssize_t char_num, c;
	char chr[1024];

	if (argnum != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	filefrom = open(arg[1], O_RDONLY);
	fileto = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(filefrom, fileto, arg);
	char_num = 1024;
	while (char_num == 1024)
	{
		char_num = read(filefrom, chr, 1024);
		if (char_num == -1)
			file_error(-1, 0, arg);
		c = write(fileto, chr, char_num);
		if (c == -1)
			file_error(0, -1, arg);
	}
	error = close(filefrom);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	error = close(fileto);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	return (0);
}
