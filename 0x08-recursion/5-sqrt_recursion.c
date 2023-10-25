#include "main.h"

/**
 * _sqrt_recursion - main functiion
 * @n: input
 * Return: number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @a: input
 * @b: input
 * Return: sqrt
 */

int _sqrt(int a, int b)
{
	if (a < 0)
		return (-1);
	if ((b * b) > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (_sqrt(a, b + 1));
}
