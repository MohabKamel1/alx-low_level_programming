#include <stdio.h>

/**
 * _strlen - Return the lenght
 * @str: the string to get lenght
 * Return: the lenght
 */

size_t _strlen(const char *str)
{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}
