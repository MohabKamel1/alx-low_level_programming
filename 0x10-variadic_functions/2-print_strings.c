#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Enter data
 * @separator: input
 * @n: input
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		printf("%s", separator);
		p = va_arg(valist, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(valist);
}
