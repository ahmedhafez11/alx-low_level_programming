#include "function_pointers.h"
/**
 * print_name - print name
 * @name: the name to print
 * @f: the pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
