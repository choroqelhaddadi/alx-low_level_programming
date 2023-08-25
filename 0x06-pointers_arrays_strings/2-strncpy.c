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
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (i = i; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
