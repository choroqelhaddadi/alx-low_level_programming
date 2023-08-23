#include "main.h"
#include <stdio.h>
/**
 * _strcpy- copies string pointed to by pointer named src,
 * including the terminating null
 * to buffer pointed to by dest.
 *
 * @dest: pointer to the buffer
 * @src: pointer to the buffer string
 * Return: Return dest
 *
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
