#include <unistd.h>

/**
 * _putchar - taake charcter to stdio 
 * @c: refer to character 
 * Return: always return 1 if successed 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
