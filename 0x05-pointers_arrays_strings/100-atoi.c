#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string
 *
 * Return: value of the integer
 */

int _atoi(char *s)
{
	int i = 0, l = 1, ck = 0;
	unsigned int num = 0;

	while (s[i] != 0)
	{
		if (s[i] == 45)
		{
			l *= -1;
		}

		while (s[i] >= '0' && s[i] <= '9')
		{
			ck = 1;
			num = (num * 10) + (s[i] - '0');
			i++;
		}

		if (ck == 1)
		{
			break;
		}

		i++;
	}

	num *= l;
	return (num);
}
