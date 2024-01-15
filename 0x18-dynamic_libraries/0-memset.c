#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area
 * @s: input
 * @b: input
 * @n: input
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
