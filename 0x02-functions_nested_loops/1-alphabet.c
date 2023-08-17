#include "main.h"
/**
 * print_alphabet - prints all the lower-case alphabets.
 */
void print_alphabet(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		_putchar(cha);
		cha += 1;
	}
	_putchar('\n');
}
