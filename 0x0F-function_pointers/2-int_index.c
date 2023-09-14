#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array.
 * @size:  is the size of the array
 *
 * @cmp: pointer to a function cmp.
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
