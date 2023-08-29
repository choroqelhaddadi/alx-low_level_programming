#include "main.h"
/**
 * _memcpy - a function copies memory area.
 * @n: number of bytes copied.
 * @src: pointer to source memory.
 * @dest: pointer to the destination memory.
 * Return: a pointer to dest string.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
