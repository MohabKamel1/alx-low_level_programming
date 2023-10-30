#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Enter data
 * @ac: input
 * @av: input
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int c, i, j, ia;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	a = malloc((c + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			a[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			a[ia] = av[i][j];
	}
	a[ia] = '\0';

	return (a);
}
