#include <stdio.h>

/**
 * swap_int - swap the valuesof two int
 * @a: the first int
 * @b: the sceond int
 * Return: n
 */

void swap_int(int *a, int *b)
/* the functiion that swaps the values of two int */
{
        int temp = *a;

	*a = *b;
	*b = temp;
}
