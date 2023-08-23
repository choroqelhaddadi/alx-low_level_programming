#include "main.h"
#include <stdio.h>
/**
 * _strcpy- copies the string pointed to by src,
 * including the terminating null
 * to the buffer pointed to by dest.
 *
 * @dest: buffer
 * @src: string
 * Return: Return value the pointer to dest
 *
*/

char *_strcpy(char *dest, char *src)
{
	int counter = 0, length;

	while (*(src + counter) != '\0')
	{

		counter++;
	}
	length = counter;
	counter = 0;

	while (counter <= length)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	return (dest);
}
