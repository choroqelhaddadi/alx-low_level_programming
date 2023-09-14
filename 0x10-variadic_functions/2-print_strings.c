#include "variadic_functions.h"

/**
 * print_strings - prints strings,
 * followed by a new line.
 * @n: the number of integers passed to the function.
 * @separator: string to be printed between the strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list inputs;
	unsigned int i;
	char *string;

	va_start(inputs, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(inputs, char *);

		if (!string)
			string = "(nil)";

		printf("%s", string);

		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");

	va_end(inputs);
}
