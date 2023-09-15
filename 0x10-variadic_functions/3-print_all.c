#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 * passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list inputs;
	int i = 0;
	char *str;

	va_start(inputs, format);

	while (format)
	{
		while (*(format + i))
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(inputs, int));
				break;
			case 's':
				str = va_arg(inputs, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'i':
				printf("%i", va_arg(inputs, int));
				break;
			case 'f':
				printf("%f", va_arg(inputs, double));
				break;
			default:
				i++;
				continue;
			}
			i++;
			if (*(format + i))
				printf(", ");
		}
		break;
	}
	printf("\n");
	va_end(inputs);
}
