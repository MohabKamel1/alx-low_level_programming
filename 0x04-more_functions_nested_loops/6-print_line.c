#include "main.h"

/**
 * print_line - print stright line
 * @n: the number of lines
 * Return: E
 */

void print_line(int n)
{
        int x;

        if (n <= 0)
        {
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
        _putchar(95);
        }
        _putchar('\n');
	}
}