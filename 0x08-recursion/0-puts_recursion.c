#include "main.h"
#include <string.h>

/**
 * _puts_recursion - Enter Data
 * @s: input
 * Return: 0
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
