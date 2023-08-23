#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string.
 *
 *
*/

void puts_half(char *str)
{

	int i = 0, length;

	while (*(str + i) != '\0')
	{

		i++;
	}

	length = --i;

	for (i = (length / 2) + 1; i <= length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
