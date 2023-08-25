#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: string be encoded.
 * Return: pointer to string.
 */

char *rot13(char *s)
{
	int x = 0, j;

	char rot_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (s[x] != '\0')
	{
		for (j = 0; rot_1[j] != '\0'; j++)
		{
			if (s[x] == rot_1[j])
			{
				s[x] = rot_2[j];
				break;
			}
		}
		x++;
	}
	return (s);
}
