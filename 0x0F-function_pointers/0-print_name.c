#include "function_pointers.h"

/**
 * print_name - Enter data
 * @name: input
 * @f: input
 * Return: 0
 */

void print_name(char *name, void (*f)(char *c))
{
	if (f != NULL)
		f(name);
}
