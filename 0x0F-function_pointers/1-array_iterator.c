#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of array.
 * @array: an array.
 * @size: size of the array
 *
 * @action: pointer to a function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL || size <= 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
