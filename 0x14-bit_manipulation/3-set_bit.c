#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Enter data
 * @n: input
 * @index: input
 * Return: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
