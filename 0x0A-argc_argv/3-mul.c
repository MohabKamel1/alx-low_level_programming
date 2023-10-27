#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of args
 * @argc: size
 * @argv: string
 * Return: if error 0
 *			eles 1.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
