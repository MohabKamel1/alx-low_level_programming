#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Enter data
 * @s1: input
 * @s2: input
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * (i + j + 1));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		a[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		a[k] = s2[j];

	return (a);
}
