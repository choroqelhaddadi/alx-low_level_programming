#include "main.h"
/**
 * _memset - a function fills memory with a constant byte.
 * @n: number of bytes of the memory area pointed to by s to be filled.
 * @b: charachter to be filled with.
 * Return: pointer to the memory s.
 * @s: pointer to the s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}
