#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Enter data
 * @b: input
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
