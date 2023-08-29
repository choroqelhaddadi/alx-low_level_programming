#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function locates a character in a string.
 * @s: specifies the pointer to null-terminated string
 * @c: specifies the character to be searched.
 * Return: a pointer to the first occurrence of
 * character c in the string s,
 * or null if the character is not found.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
