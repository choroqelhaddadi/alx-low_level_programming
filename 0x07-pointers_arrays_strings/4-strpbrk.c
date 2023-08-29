#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function searches a string.
 * @s: string to be searched.
 * @accept: string containing the characters to find.
 * Return: Returns a pointer to the byte in s matches
 * one of the bytes in accept, or null if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i += 1;
	}
	return (NULL);
}
