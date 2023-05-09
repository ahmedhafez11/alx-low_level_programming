#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- read the text file
 * @filename: text name of file
 * @letters: letters to be read
 * Return: i
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *chr;
	ssize_t c;
	ssize_t i;
	ssize_t j;

	c = open(filename, O_RDONLY);
	if (c == -1)
		return (0);
	chr = malloc(sizeof(char) * letters);
	j = read(c, chr, letters);
	i = write(STDOUT_FILENO, chr, j);
	free(chr);
	close(c);
	return (i);
}
