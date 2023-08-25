#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string to be capitalized
 * Return: pointer to string s.
 */

char *cap_string(char *s)
{
	int j = 0, c = 0;
	char x[13] = {10, 46, 59, 44, 33, 63, 34, 40, 41, 123, 125, 32, 9};


	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			if (j == 0)
			{
				s[j] = s[j] - 32;
			}
			else
			{
				for (c = 0; c < 13; c++)
				{
					if (s[j - 1] == x[c])
					{
						s[j] = s[j] - 32;
						break;
					}
				}
			}
		}
		j++;
	}
	return (s);
}
