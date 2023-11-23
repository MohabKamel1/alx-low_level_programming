#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Enter data
 * @n: input
 * @index: input
 * Return: 1 , -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
