#include "main.h"
#include <stdio.h>
/**
 * _strspn - a function gets the length of substring.
 * @s: string to be searched.
 * @accept: string containing the characters to match.
 * Return: number of characters in the initial
 * segment of s which consist only of characters from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, ln = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				ln++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (ln);
}
