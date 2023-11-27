#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Enter Data
 * @filename: input
 * @letters: input
 * Return: void
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, y, i;
	char *ch;

	ch = malloc(sizeof(char) * letters);
	if (!ch)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	i = read(fd, ch, letters);
	if (i < 0)
	{
		free(ch);
		return (0);
	}
	ch[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, ch, i);
	if (y < 0)
	{
		free(ch);
		return (0);
	}
	free(ch);
	return (y);
}
