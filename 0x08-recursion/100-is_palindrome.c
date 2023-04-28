#include "main.h"

int check_pal(char *str, int i, int len);
int _strlen_recursion(char *str);

/**
 * is_palindrome - checks if a string is a palindrome
 * @str: string
 * Return: 1 or 0
 */
int is_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (check_pal(str, 0, _strlen_recursion(str)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @str: string to calculate the length of
 * Return: len of string
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @str: string
 * @i: for iteration
 * @len: string lenght
 * Return: 1 or 0
 */
int check_pal(char *str, int i, int len)
{
	if (*(str + i) != *(str + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(str, i + 1, len - 1));
}
