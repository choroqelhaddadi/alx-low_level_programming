#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer.
 *
 * @n: int number to be printed
 *
*/

void print_number(int n)
{
	unsigned int NUM;

	if (n < 0)
	{
		NUM = -n;
		_putchar('-');
	} else
	{
		NUM = n;
	}

	if (NUM / 10)
	{
		print_number(NUM / 10);
	}

	_putchar((NUM % 10) + '0');
}
