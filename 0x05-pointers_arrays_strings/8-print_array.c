#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: string
 * @n: number of elements of the array to be printed
 *
 *
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i <= n - 2)
		{
			printf(", ");
		}
	}
	printf("\n");
}
