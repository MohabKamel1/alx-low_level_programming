#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - Enter Data
 * @s: input
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
