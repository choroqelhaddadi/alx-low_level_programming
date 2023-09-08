#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @size: size.
 * @nmemb: number of elements
 *
 * Return: The _calloc function allocates memory for
 * an array of nmemb elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (!size || !nmemb)
		return (NULL);

	p = malloc(size * nmemb);
	if (!p)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
