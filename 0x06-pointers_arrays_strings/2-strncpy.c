#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will be copied.
 * Return: Returns a pointer to string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;

	for (length; length < n; length++)
	{
		if (*(src + length) == '\0')
			break;
		*(dest + length) = *(src + length);
	}
	for (length; length <= n; length++)
	{
		*(dest + length) = '\0';
	}

	return (dest);
}
