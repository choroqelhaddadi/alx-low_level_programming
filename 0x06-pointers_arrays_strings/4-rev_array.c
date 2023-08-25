#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an arry of int.
 * @a: array to be reversed
 * @n: number of elements of array
*/

void reverse_array(int *a, int n)
{
	int j, x;

	if (n > 1)
	{
		for (j = 0; j <= (n / 2); j++)
		{
			x = a[j];
			a[j] = a[n - 1 - j];
			a[n - 1 - j] = x;
		}
	}
}
