#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns a pointer to 2d array of integers.
 *
 * @width: array width.
 * @height: array height.
 *
 * Return: pointer to 2d array.
 *
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));
		if (arr[a] == NULL)
		{
			free(arr);
			for (b = 0; b <= a; b++)
				free(arr[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			arr[a][b] = 0;
	}
	return (arr);
}
