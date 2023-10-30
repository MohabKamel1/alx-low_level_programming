#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Enter data
 * @str: input
 * Return: character array.
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = (char *)malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		a[j] = str[j];
	return (a);
}
