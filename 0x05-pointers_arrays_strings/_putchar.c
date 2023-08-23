#include <unistd.h>

/**
 * _putchar - print character to stdout
 * @c: The character
 *
 * Return: On success 1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
