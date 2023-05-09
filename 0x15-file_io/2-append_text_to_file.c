#include "main.h"
/**
 * append_text_to_file - add text to the lsat part of file
 * @filename: pointer
 * @text_content:the content of text
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, i, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	i = write(a, text_content, length);
	if (a == -1 || i == -1)
		return (-1);
	close(a);
	return (1);
}
