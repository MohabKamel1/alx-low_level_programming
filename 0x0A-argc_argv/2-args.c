#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - ENter data
 * @argc: input
 * @argv: input
 * Return: char
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	exit(EXIT_SUCCESS);
	return (0);
}
