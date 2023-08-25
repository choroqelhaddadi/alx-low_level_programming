#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: Returns a 0 if equal
 * 1 if s1 > s2, -1 if s1 < s2.
*/

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; (j + 1) != 0; j++)
	{
		if (s1[j] > s2[j])
			return (s1[j] - s2[j]);
		if (s1[j] < s2[j])
			return (s1[j] - s2[j]);
		if (s1[j] == '\0' || s1[j] == '\0')
			break;
	}

	return (0);
}
