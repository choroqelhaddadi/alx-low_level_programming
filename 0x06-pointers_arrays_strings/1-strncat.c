#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will be added from src.
 * Return: Returns a pointer to dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	unsigned int destlen = 0;
	unsigned int srclen = 0;

	while ((*(dest + destlen) != '\0'))
	{
		destlen++;
	}

	while (srclen < (unsigned int) n)
	{
		if (*(src + srclen) == '\0')
			break;
		*(dest + destlen + srclen) = *(src + srclen);
		srclen++;
	}
	*(dest + destlen + n) = '\0';

	return (dest);
}
