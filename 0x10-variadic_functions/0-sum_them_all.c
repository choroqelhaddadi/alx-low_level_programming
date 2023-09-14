#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all -returns the sum of all its parameters.
 * @n: number of arguments.
 *
 * Return: the sum of numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list inputs;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(inputs, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(inputs, int);
	}

	va_end(inputs);
	return (sum);
}
