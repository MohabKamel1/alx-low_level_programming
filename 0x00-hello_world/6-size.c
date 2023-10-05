#include <stdio.h>

/**
 *  main - prints the size of various types on the computer
 *  Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %d byte(s) \n", (unsigned long)sizeof(a));
printf("size of a int: %d byte(s) \n", (unsigned long)sizeof(b));
printf("size of a long int: %d byte(s) \n", (unsigned long)sizeof(c));
printf("size of a long long int: %d byte(s) \n", (unsigned long)sizeof(d));
printf("size of a float: %d byte(s) \n", (unsigned long)sizeof(f));
return (0);
}
