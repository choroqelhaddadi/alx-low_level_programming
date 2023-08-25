#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @s: string to be encoded.
 * Return: string.
 */
char *leet(char *s)
{
	int a = 0, b;

	char code1[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[a] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == code1[b])
			{
				s[a] = code2[b];
			}
		}
		a++;
	}
	return (s);
}
