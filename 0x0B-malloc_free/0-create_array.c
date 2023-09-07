#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,and
 * initializes it with a specific char.
 * @c: character.
 * @size: size of array.
 *
 * Return: pointer to array.
 * or NULL if size = 0 or if it fails.
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (i == size)
		{
			ar[i] = '\0';
			return (ar);
		}

		ar[i] = c;
	}
	return (NULL);
}
