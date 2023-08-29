#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function locates a substring.
 * @haystack: string to be searched.
 * @needle: string containing the characters to search.
 * Return: a pointer to the beginning of the located substring,
 * or null if the substring not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	while (haystack[i])
	{
		for (j = 0, x = i; needle[j]; j++, x++)
		{
			if (haystack[x] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
		i++;
	}
	return (NULL);
}
