#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @s: string.
 * Return: returns a pointer to s.
*/

char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] -= 32;
		}
		j++;
	}
	return (s);
}
