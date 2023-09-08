#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: min number.
 * @max: max number.
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (!p)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
