#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - that prints numbers,
 * followed by a new line.
 * @n: the number of integers passed to the function.
 * @separator: string to be printed between numbers.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list inputs;
	unsigned int i;

	va_start(inputs, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(inputs, int));
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(inputs);
}
