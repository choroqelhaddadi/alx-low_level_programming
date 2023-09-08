#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 *
 * @ptr: is a pointer to the memory previously allocated
 *
 * @old_size: is the size of the allocated space for ptr.
 *
 * @new_size: is the new size
 * Return: the pointer to the newly created array
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, s;
	char *new, *old = ptr;

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
		s = old_size;
	else if (old_size > new_size)
		s = new_size;
	else
		return (ptr);

	new = malloc(new_size);
	if (!new)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		*(new + i) = *(old + i);
	}

	free(ptr);
	return (new);
}
