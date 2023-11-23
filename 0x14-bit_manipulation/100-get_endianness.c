#include "main.h"

/**
 * get_endianness - Enter data
 * Return: 0 , 1
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
