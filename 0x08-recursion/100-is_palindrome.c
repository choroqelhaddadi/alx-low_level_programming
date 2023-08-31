#include "main.h"
#include <stdio.h>

/**
 * string_length -  a function that calculates length of string.
 *
 * @s: a string.
 *
 * Return: length of string.
 *
 */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + string_length(s + 1));
}

/**
 * stringCheck - returns 1 if a string is a palindrome, 0 if not.
 *
 * @s: string.
 * @s_2: string.
 * @len: string length.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int stringCheck(char *s, int len, char *s_2)
{
	if (len <= 0)
	{
		return (1);
	}

	if (*s != *(s_2 + len - 1))
	{
		return (0);
	}

	return (stringCheck(s + 1, len - 1, s_2));
}

/**
 * is_palindrome -  a function that returns 1
 * if a string is a palindrome and 0 if not.
 *
 * @s: string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}

	return (stringCheck(s, string_length(s), s));
}
