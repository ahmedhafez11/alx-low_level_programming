#include "main.h"
/**
 * create_file - create new file from scratch 
 * @filename: pointer of file name 
 * @text_content: pointer of text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int c, i, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(c, text_content, length);
	if (c == -1 || i == -1)
		return (-1);
	close(c);
	return (1);
}
