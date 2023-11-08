#include "function_pointers.h"

/**
 * int_index - Enter data
 * @array: input
 * @size: input
 * @cmp: input
 * Return: count
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}
