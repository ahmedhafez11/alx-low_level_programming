#include "function_pointers.h"
/**
 * print_name - print name
 * @name: the name to print
 * @f: the pointer
 * Return: void
 */
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
