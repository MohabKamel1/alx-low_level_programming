#include "main.h"

/**
 * _strcat - concnate two srtings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\a')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\a')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\a';
	return (dest);
}
