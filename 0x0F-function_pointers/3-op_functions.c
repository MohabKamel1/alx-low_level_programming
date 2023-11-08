#include "3-calc.h"

/**
 * op_add - Enter data
 * @a: input
 * @b: input
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Enter data
 * @a: input
 * @b: input
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first int
 * @b: second int
 * Return: INTEGER (Success)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Enter data
 * @a: input
 * @b: input
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Enter data
 * @a: input
 * @b: input
 * Return: 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a % b);
}
