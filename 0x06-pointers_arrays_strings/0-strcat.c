#include "main.h"
#include <stdio.h>
/**
 * _strcat - function concatenates two strings.
 * @dest: pointer to destination.
 * @src: pointer to source.
 * Return: pointer to the dest.
*/

char *_strcat(char *dest, char *src)
{
	int length1 = 0;
	int length2 = 0;

	while ((*(dest + length1) != '\0'))
		length1++;

	while (*(src + length2) != '\0')
	{
		*(dest + length1 + length2) = *(src + length2);
		length2++;
	}

	*(dest + length1 + length2) = *(src + length2);

	return (dest);
}
