#include "main.h"
#include <string.h>

/**
 * factorial - Enter Data
 * @n: input
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}