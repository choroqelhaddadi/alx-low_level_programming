#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - a function that converts a string to int.
 *
 * @s: string to be converted to int.
 *
 * Return: integer.
*/

unsigned long int _atoi(char *s)
{
	int length = 0, n = 1;
	unsigned long int num = 0;

	while (s[length] != '\0')
	{
		if (s[length] == '-')
		{
			n = -1;
			length++;
		}

		num = (num * 10) + (s[length] - '0');
		length++;
	}

	return (n * num);
}

/**
 * is_digit - a function that checks if a string is a number.
 *
 * @s: string to be checked.
 *
 * Return: 1 if number, otherwise 0.
*/

int is_digit(char s[])
{
	int length = 0;

	while (s[length] != 0)
	{
		if (s[length] > 57 || s[length] < 48)
		{
			return (0);
		}

		length++;
	}

	return (1);
}

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: string passed by reference.
 *
 * Return: returns the length of the string.
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * main -a program that multiplies two positive numbers.
 *
 * @argv: arg vector.
 * @argc: arg count.
 *
 * Return: 0 when success.
 */

int main(int argc, char *argv[])
{
	char *s1 = argv[1], *s2 = argv[2];
	int *r, l1 = _strlen(s1), l2 = _strlen(s2), l, i, dg1 = 0, dig2 = 0, c, z = 0;

	if (argc != 3 || (!(is_digit(s1) && is_digit(s2))))
	{
		printf("Error\n");
		exit(98);
	}
	l = l1 + l2;
	r = malloc(sizeof(int) * l);
	if (!r)
		return (1);
	for (i = 0; i < l1 + l2; i++)
		r[i] = 0;
	for (l1 = l1; l1 > 0; l1--)
	{
		dg1 = s1[l1 - 1] - 48;
		c = 0;
		for (l2 = _strlen(s2); l2 > 0; l2--)
		{
			dig2 = s2[l2 - 1] - 48;
			c += r[l1 + l2 - 1] + (dg1 * dig2);
			r[l1 + l2 - 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[l1 + l2] += c;
	}
	for (i = 0; i < l; i++)
	{
		if (r[i])
			z = 1;
		if (z)
			_putchar(r[i] + 48);
	}
	if (!z)
		_putchar(48);
	_putchar('\n');
	free(r);
	return (0);
}
