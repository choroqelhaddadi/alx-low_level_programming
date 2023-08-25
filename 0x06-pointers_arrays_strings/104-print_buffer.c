#include "main.h"
#include <stdio.h>

/**
 * prnt_ln - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * @ln: line of buffer to print
 */

void prnt_ln(char *b, int ln, int size)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		if (j <= size)
			printf("%02x", b[ln * 10 + j]);
		else
		{
			putchar(' ');
			putchar(' ');
		}

		if (j % 2 != 0)
			putchar(' ');
	}
	for (i = 0; i <= size; i++)
	{
		if (b[ln * 10 + i] <= 31 || b[ln * 10 + i] >= 127)
			putchar('.');
		else
			putchar(b[ln * 10 + i]);
	}
}


/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, length;

	for (i = 0; i <= (size - 1) / 10 && size != 0; i++)
	{
		printf("%08x: ", i * 10);
		if (i < (size / 10))
		{
			length = 9;
			prnt_ln(b, i, length);
		}
		else
		{
			length = (size % 10) - 1;
			prnt_ln(b, i, length);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
