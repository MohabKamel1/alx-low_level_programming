#include "main.h"
#include <string.h>

/**
 * _strpbrk -  Entry point
 * @s: input
 * @accept: input
 * Return: 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int a = strlen(s);
	int b = strlen(accept);
	int i = 0;

	for (; i < a; i++)
	{
		int j = 0;

		for (; j < b; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
