#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is upper
 * @c: input
 * Return: 0
 */

int _isupper(int c)
{
	int value;
	char s = c;

	if (isupper(s))
		value = 1;
	else
		value = 0;

	return (value);
}
