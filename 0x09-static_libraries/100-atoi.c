#include "main.h"
#include <string.h>

/**
  * _atoi - Enter data
  * @s: input
  * Return: Always (Success)
  */

int _atoi(char *s)
{
	int j = 0;
	unsigned int  a = 0;
	int min = 1;
	int chk = 0;
	int len = strlen(s);

	for (j = 0; j < len; j++)
	{
	if (s[j] == 45)
		min *= -1;
	if (s[j] >= 48 && s[j] <= 57)
	{
		chk = 1;
		a = (a * 10) + (s[j] - '0') * min;
	}
	if (chk == 1 && s[j] == ' ')
		break;
	}
	return (a);
}
