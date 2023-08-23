#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line
 *
 * @str: string passed by reference.
 *
 *
*/

void puts2(char *str)
{

	int i = 0, length;

	while (*(str + i) != '\0')
	{

		i++;
	}

	length = --i;

	for (i = 0; i <= length; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
