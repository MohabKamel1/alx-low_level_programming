#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  main - write poit
 *  Return: 0
 */

int main(void)
{
	int d;
	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
