#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>

/**
 * sum_them_all - Enter data
 * @n: input
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j = 0, i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
	{
		j += va_arg(args, int);
	}

	va_end(args);
	return (j);
}
