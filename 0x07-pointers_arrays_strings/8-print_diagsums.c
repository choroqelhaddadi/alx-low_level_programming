#include <stdio.h>
#include <stdio.h>

/**
 * print_diagsums - a function prints sum of
 * two diagonals of a square matrix of integers.
 * @size: size of array.
 * @a: two Dimentional array.
 */

void print_diagsums(int *a, int size)
{
	int i, j, dgt_1 = 0, dgt_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				dgt_1 += *(a + ((i * size + j)));
			}
			if (i + j == size - 1)
			{
				dgt_2 += *(a + (i * size + j));
			}
		}
	}
	printf("%i, %i\n", dgt_1, dgt_2);
}
