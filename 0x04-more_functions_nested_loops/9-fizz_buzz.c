#include "main.h"
#include <stdio.h>

/**
 * main - print a fizz buzz program
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if (x % 3 == 0 && x % 5 != 0)
	{
	printf(" fizz");
	}
	else if (x % 5 == 0 && x % 3 != 0)
	{
	printf(" Buzz");
	}
	else if (x % 3 == 0 && x % 5 == 0)
	{
	printf(" fizzBuzz");
	}
	else if (x == 1)
	{
	printf("%d", x);
	}
	else
	{
	printf(" %d", x);
	}
	}
	printf('\n');
	return (0);
}
