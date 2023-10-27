#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter data
 * @argc: input
 * @argv: input
 * Return: char
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
	return (0);
}
